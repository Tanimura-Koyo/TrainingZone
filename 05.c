#include <stdio.h>

int main(void) {
  // int n = 0;
  // for (int i = 1; i < 101; i++) {
  //     n = i + n;
  // }
  // printf("%d\n",n);   // 0 1 2 3 4
  

  // for(int i = 1; i <= 9; i++){
  //   for(int j = 1; j <= 9; j++){
  //     printf("%3d",i*j);
  //   }
  //   printf("\n");
  // }

  for(int i = 1; i <= 30; i++){
    if(i % 15 == 0){
      printf("FizzBuzz\n");
    }else if(i % 3 == 0){
      printf("Fizz\n");
    }else if(i % 5 == 0){
      printf("Buzz\n");
    }else{
      printf("%d\n",i);
    }
  }
  return 0;
}