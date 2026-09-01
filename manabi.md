---
marp: true
theme: rits
paginate: true
title: PBL開発環境
---

<style>
p:has(> img) {
  text-align: center;
}

p.source-link {
  text-align: center;
  font-size: 18px;
  margin-top: -6px;
}

section.section.large-font h1 {
  font-size: 128px;
  border-bottom: 0;
  padding-bottom: 0;
}
section.section.large-font h2 {
  font-size: 64px;
  border-bottom: 0;
  padding-bottom: 0;
}

section .text-red,
section li .text-red {
  color: #d32f2f !important;
  font-weight: 700;
}
</style>

<!-- _class: title -->

# PBL<br/>開発環境<br/>

## 2026年度 新入社員技術研修

---

<!-- _class: section -->

# 1. PBL開発環境

---

# 1. PBL開発環境 ～チーム共同開発～

チームでひとつのサービスを共同で開発するための環境として、以下を使用します。

- **GitHub Codespaces**
  - クラウド開発環境
  - <https://github.co.jp/features/codespaces>
- **Live Share（VS Code拡張機能）**
  - リアルタイム共同開発ツール
  - <https://visualstudio.microsoft.com/ja/services/live-share/>

---

<!-- _class: section large-font -->

# が、

## GitHub Copilot と相性が悪い

詳細は後述

---

<!-- _class: section large-font -->

# ので、

## 工夫して使っていただく必要あり

これも後述

---

<!-- _class: section -->

# 2. Codespacesの利用ルール

---

# 2. Codespacesの利用ルール

予算は限られているため、利用ルールを設けます。

- <span class="text-red">PBLチーム毎に同時起動は 1台</span>（＝1スペース）としてください
- <span class="text-red">利用は、基本午後のみ</span>（＝PBLの時間内）としてください（午前利用は相談ください）

補足と注意事項です。

- 起動したスペースは、起動した本人しか見えません
  - コーチ／管理者も見えません
- 起動した人が、git のコミッターとなります
- [アイドルタイムアウト](https://docs.github.com/ja/codespaces/about-codespaces/understanding-the-codespace-lifecycle#github-codespaces-%E3%81%AE%E3%82%BF%E3%82%A4%E3%83%A0%E3%82%A2%E3%82%A6%E3%83%88)があります
  - 30分操作が無いと停止し、次回アクセス時に起動に時間がかかります

---

<!-- _class: section -->

# 3. 利用の開始／始め方

---

# 3. 利用の開始／始め方：リポジトリの作成と設定（1/2）

PBL チーム毎に開発環境を準備します。

1. PBL用のリポジトリをフォークする
   - <https://github.com/rits-developer-bootcamp-FY26/pbl>
   - <span class="text-red">個人アカウントへフォークしないように注意</span>
   - リポジトリ名は `pbl-チーム名` とすること
2. README に記載の注意事項を把握する
   - フレームワークを変更しても良いが、記載ルールを守ること
3. フォークしたリポジトリへのアクセス権をチームメンバーに付与する
   - 手順は[コラボレーターを個人リポジトリに招待する](https://docs.github.com/ja/repositories/managing-your-repositorys-settings-and-features/repository-access-and-collaboration/inviting-collaborators-to-a-personal-repository) を参照
   - チームメンバー全員を「Admin」権限で招待する

---

# 3. 利用の開始／始め方：リポジトリの作成と設定（2/2）

4. main リポジトリの変更をトリガーにデプロイ（[CD](https://docs.aws.amazon.com/ja_jp/whitepapers/latest/practicing-continuous-integration-continuous-delivery/what-is-continuous-integration-and-continuous-deliverydeployment.html)）されるように設定する
   - 手順は[リポジトリの構成変数の作成](https://docs.github.com/ja/actions/how-tos/write-workflows/choose-what-workflows-do/use-variables#creating-configuration-variables-for-a-repository) を参照
   - GitHub リポジトリの Settings から Actions 用に以下の変数を設定する
     - AWS_LIGHTSAIL_SERVICE_NAME
     - AWS_LIGHTSAIL_DB_NAME
   - 設定する値は、 別途案内されるExcelファイルを参照してください

---

<!-- _class: section -->

# 4. さあ、試してみよう！

[Getting Started](https://github.com/rits-developer-bootcamp-FY26/pbl-getting-started/) を用意しています  
チームで試してみましょう！

---

<!-- _class: section -->

# 補足：Codespaces の仕組み

---

# 補足：Codespaces の仕組み

基本的には **「皆さんがこれまで活用してきた仕組み」** と同じです。  
Windows 上の VSCode から WSL 環境に接続して開発してきましたが、  
これがクラウド上の Codespaces に置き換わるイメージです。（具体的な「違い」は割愛）

![h:320](./img/architecture-containers.png)

<p class="source-link">出典: <a href="https://code.visualstudio.com/docs/devcontainers/containers">Developing inside a Container</a></p>

「Local OS」を「Windows」に、「Container」を「WSL/Codespaces」に置き換えてみてください

---

<!-- _class: section -->

# 補足：GitHub Copilot と相性が悪い問題

---

# GitHub Copilot と相性が悪い問題

前提

- Codespaces は、同時稼働はチームで１台の制約
- Codespaces スペースを起動した人 = LiveShare ホスト
- LiveShare の招待に参加した人 = LiveShare ゲスト

問題

1. LiveShare ホスト環境に、（簡単には）LiveShare ゲストはアクセスできない
1. LiveShare ホストの VSCode から Copilot を使用しても、LiveShareゲスト からは見えない
1. LiveShare ゲストの Copilot は、LiveShareホスト の一部操作しかできない
   - テキスト編集程度、ターミナル（シェル）操作は不可

---

<!-- _class: section -->

# 補足：相性問題に対処する

---

# 相性問題に対処する

詳細は、[Copilotとの付き合い方](https://github.com/rits-developer-bootcamp-FY26/pbl-getting-started/blob/main/01.GettingStarted/91.Copilot%E3%81%A8%E3%81%AE%E4%BB%98%E3%81%8D%E5%90%88%E3%81%84%E6%96%B9.md) を参照してください。  
推奨は１です。

- 案１：ホスト固定＝「今日のホスト」を決める
  - 開発環境のローテーションを固定し、運用で補う
- 案２：ローカル開発環境を使う
  - ローカルの開発環境を育て、「おま環」と付き合う
- 案３：オフライン＝出社してLiveShareを使わない
  - ※出社を推奨しているわけではなく、出社で集まれるタイミングがある場合の選択肢のひとつ

---

<!-- _class: end -->