#include <stdio.h>
#include <stdlib.h>   // malloc / free

int main(void) {
    int n;
    printf("件数: ");
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);   // int n 個分を確保
    if (arr == NULL) {                     // 確保失敗のチェック
        printf("メモリ確保に失敗\n");
        return 1;
    }


    int sum = 0;

    for(int i = 0;i < n; i++){//配列に数値格納
      printf("数値を入力： ");
      scanf("%d",&arr[i]);
      sum += arr[i];
    }


    printf("平均は：%f\n",(double)sum/n);

    free(arr);      // 使い終わったら解放
    arr = NULL;     // 解放済みポインタを使わないように
    return 0;
}