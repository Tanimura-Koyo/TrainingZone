#include <stdio.h>

int main(void){
  int n = 42;
  double pi = 3.141592;
  char c = 'Z';

  printf("整数: %d\n", n);
  printf("小数: %f\n", pi);
  printf("2桁: %.2f\n", pi);
  printf("幅5: [%5d]\n", n);
  printf("文字: %c\n", c);
  printf("%%を出すには%%%%\n");

  int age;
  printf("年齢を入力: ");
  scanf("%d", &age);
  printf("来年は %d 歳\n",age+1);

  int a;
  int b;

  printf("a= ");
  scanf("%d",&a);
  printf("b= ");
  scanf("%d",&b);

  printf("%d + %d = %d\n",a,b,a+b);
  printf("%d - %d = %d\n",a,b,a-b);
  printf("%d * %d = %d\n",a,b,a*b);
  if(b == 0){
    printf("0では割り切れません\n");
  }else{
    printf("%d / %d = %f\n",a,b,(double)a/(double)b);
    printf("%d %% %d = %d\n",a,b,a%b);
  }
  
  return 0;
}