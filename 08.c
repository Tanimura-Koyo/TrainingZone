#include <stdio.h>


void minmax(int arr[],int n,int *min,int *max){
  *min = arr[0];
  *max = arr[0];

  for(int i = 0;i < n;i++){
    if(arr[i] < *min) *min = arr[i];
    if(arr[i] > *max) *max = arr[i];
  }
}


int main(void) {
  int num;
  int mn,mx;
  printf("要素数： ");
  scanf("%d",&num);
  int array[num];
  
  for(int i = 0;i < num;i++){
    printf("数値を入力：");
    scanf("%d",&array[i]);
  }

  minmax(array,num,&mn,&mx);

  printf("最小値：%d,最大値：%d\n",mn,mx);

  return 0;
}