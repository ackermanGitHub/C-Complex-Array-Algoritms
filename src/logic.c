#include <time.h>

int factorial(long num){
    if(num > 1)
        return num * factorial(num - 1);
    else 
        return 1;
}
 
int fibo(long n){
    int result;
    if(n<2) 
        result = n;
    else 
        result = fibo(n-1)+fibo(n-2);
    return result;
}

int fibon(long num){
    int result;
    for (int i = 0; i < num; i++){
        result *= i + 1 * i + 2;
    }
    return result;
}