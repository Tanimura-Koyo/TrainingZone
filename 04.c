#include <stdio.h>

int main(void) {
  int a;

  printf("a = ");
  scanf("%d",&a);

  if(a%2 == 0){
    if(a > 0){
      printf("%dは偶数かつ正\n",a);
    }else if(a < 0){
      printf("%dは偶数かつ負\n",a);
    }else{
      printf("%dは0\n",a);
    }
  }
  if(a%2 != 0){
    if(a > 0){
      printf("%dは奇数かつ正\n",a);
    }else if(a < 0){
      printf("%dは奇数かつ負\n",a);
    }else{
      printf("%dは0\n",a);
    }
  }
  return 0;
}