#include <stdio.h>

int is_prime(int);

int main(void) {
    int a;
    printf("a = ");
    scanf("%d",&a);


    if(is_prime(a) == 1){
        printf("%dは素数\n",a);
    }else{
        printf("%dは素数ではない\n",a);
    }

    return 0;
}

int is_prime(int n){
    if(n < 2) return 1;
    for(int i = 2;i < n; i++){
        if(n % i == 0){
            return 0;
        }else{
            return 1;
        }
    }
    return 1;
}