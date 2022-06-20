#include<stdio.h>

int main(void){

    int array[5] = {1,2,3,4,5};
    // Punteros equivalentes
    int *a = array; // Dirección del primer elemento del array
    int *b = &array[0]; // Dirección del primer elemento del array
    // Apuntador al sigiente elemento al que apunta a
    int *c = a + 1;
    printf("a: %p\nb: %p\nc: %p\n", a, b, c);
    printf("*a: %d\n*b: %d\n*c: %d\n", *a, *b, *c);
    // Asignandole 4 al primer elemento del array
    *a = 4;
    printf("%d\n", array[0]);

    char string[] = "character";
    // Apuntador a cadena de carácteres
    char *s = string;
    // Convirtiendo cadena de carácteres a mayúsculas
    while(*s != '\0'){
        if(*s >= 'a' && *s <= 'z')
            *s -= 32;
        ++s;
    }
    printf("New string: %s\n", string);

    int num = 6;
    // Apuntador constante
    int *const t = &num;
    num = 10;
    printf("num: %d\n", num);

    //Copying a string using array notations
    char string1[10], *string2 = "Hello";
    for (int i = 0; string1[i] = string2[i]; i++){}
    printf("string1 = %s", string1);

    return 0;
}