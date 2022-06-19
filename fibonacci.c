#include<stdio.h>

int fibo(int n){
    int result;
    if(n<2) result = 1;
    else result = fibo(n-1)+fibo(n-2);
    return result;
}
int main(void){
    /* char character1 = 'V';
    char character2 = 'c';
    if(character1 > character2){
        printf("%c > %c", character1, character2);
    } else {
        printf("%c < %c", character1, character2);
    }
    printf("\n%d\n", character1 - character2);
    printf("%d", 'z'); */
    printf("%d", fibo(5));
    return 0;
}