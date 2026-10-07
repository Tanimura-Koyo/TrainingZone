#include <stdio.h>

int sum_array(int *arr,int);

int main(void) {
  int num;
  printf("要素数は: ");
  scanf("%d",&num);
  int array[num];
  for(int i = 0;i < num;i++){
    printf("数値を入力してください: ");
    scanf("%d",&array[i]);
  }

  printf("合計は%d\n",sum_array(array,num));

  return 0;
}

int sum_array(int arr[],int n){
  int sum = 0;
  for(int i = 0;i < n;i++){
    sum += arr[i];
  }
  return sum;
}