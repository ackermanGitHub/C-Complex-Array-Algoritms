#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Los cuatro alcances posibles para un identificador son: 
// Alcance de función .
// Alcance de archivo.
// Alcance de bloque.
// Alcance del prototipo de función.

int x = 2;

void myFunction(){
    printf("El valor entra como: %d\n", x);
    static int x = 25;
    printf("El valor x ahora es: %d\n", x);
    x += 20;
    printf("El valor sale como: %d\n", x);
}
void myFunction1(){
    static int x = 2000;
    printf("El valor entra como: %d\n", x);
    x += 50;
    printf("El valor sale como: %d\n", x);
}
void myFunction2(void){
    printf("El valor entra como: %d\n", x);
    x *= 10;
    printf("El valor sale como: %d\n", x);
}

// With arrays
void myFunction3(){
    static int arr[10];
    static int maxIndex = 5;
    static int tamLogic = 0;
    for (int i = tamLogic; i < maxIndex; i++)
    {
        arr[i] += i + 1;
        tamLogic++;
    }    
    maxIndex += 5;
    printf("[ ");
    for (int i = 0; i < tamLogic; i++)
    {
        if(i != tamLogic - 1)
            printf("%d, ", arr[i]);
        else 
            printf("%d", arr[i]);
    }
    printf(" ]\n");
}

int main(){   
    //printf("El valor x entra como: %d\n", x);

    //int x = 19;
    //printf("El valor x ahora es: %d\n", x);

    //myFunction();
    //myFunction();

    //myFunction1();
    //myFunction1();

    //myFunction2();
    //printf("El valor x ahora es: %d\n", x);

    //myFunction3();
    //myFunction3();
    
    return 0;
}