#include <time.h>

int factorial(int num){
    if(num > 1)
        return num * factorial(num - 1);
    else 
        return 1;
}
 
int fibo(int n){
    int result;
    if(n<2) result = 1;
    else result = fibo(n-1)+fibo(n-2);
    return result;
}