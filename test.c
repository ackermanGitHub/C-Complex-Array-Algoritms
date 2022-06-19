#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./src/class.c"

void myFunction(){
    static int num = 25;
    printf("El valor entra como: %d\n", num);
    num += 20;
    printf("El valor sale como: %d\n", num);
}
void myFunction1(){
    static int num = 2000;
    printf("El valor entra como: %d\n", num);
    num += 50;
    printf("El valor sale como: %d\n", num);
}

int main(){   
    myFunction();
    myFunction();
    myFunction1();
    myFunction1();
    return 0;
}