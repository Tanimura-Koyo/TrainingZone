#include <stdio.h>
#include <string.h>

int main(void) {
    // int scores[5] = {80, 65, 90, 72, 88};
    // int n = sizeof(scores) / sizeof(scores[0]);   // 5
    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     sum += scores[i];
    // }
    // printf("平均: %.1f\n", (double)sum / n);
    // return 0;

  // char a[20] = "Hello";
  // char b[] = "World";

  // printf("%zu\n", strlen(a));      // 5（\0 は数えない）
  // strcat(a, b);                    // a の後ろに b を連結
  // printf("%s\n", a);               // HelloWorld

  // if (strcmp(a, "HelloWorld") == 0) {   // 比較は == ではなく strcmp
  //     printf("同じ\n");
  // }
  // return 0;

  int scores[5];

  for(int i = 0; i < (int)sizeof(scores)/(int)sizeof(scores[0]); i++){
    printf("scores%d = ",i);
    scanf("%d",&scores[i]);
  }
  int max = scores[0];
  int min = scores[0];

  for(int j = 1; j < (int)sizeof(scores)/(int)sizeof(scores[0]); j++){
    if(scores[j] > max){
      max = scores[j];
    }
    if(scores[j] < min){
      min = scores[j];
    }
  }
  printf("最大値は%dで最小値は%d\n",max,min);


  char s[] = "obsidian";
  int len = 0;
  while(s[len] != '\0'){
    len++;
  }
  printf("%d\n",len);
  return 0;
}