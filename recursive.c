#include<stdio.h>
#include "./src/logic.c"

int main(void){
    printf("%d\n", fibo(35));
    printf("%d\n", factorial(5));
    printf("%d", fibo(35));   
    return 0;
}