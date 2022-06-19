#include <stdio.h>
#include "./logic/algoritms.c"
#define filas 8
#define columnas 8

int main(void){
    //Exercise #1
    /* 
    int arrayEx1[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    displaceArray(arrayEx1, 12, 8);
    printf("arrayEx1 = [");
    for(int i = 0; i < 12; i++){
        printf("%d, ", arrayEx1[i]);
    }
    printf("]");
    */

    //Exercise #2
    /*
    int arrayEx2_1[filas][columnas] = {{1,0,0,0,0,0,0,0},{0,0,1,0,0,0,1,0},{0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0},{0,1,0,0,0,0,0,0},{0,0,1,0,1,0,0,0},{1,0,0,0,0,0,0,0},{0,1,0,0,0,0,0,0}};
    int arrayEx2_2[filas][columnas] = {{0,0,1,0,0,0,1,0},{1,0,0,1,0,0,0,0},{0,0,0,0,0,0,0,1},{0,1,0,0,1,0,0,0},{0,0,0,1,0,0,0,0},{0,0,0,0,1,1,0,0},{0,0,1,0,0,0,0,1},{1,0,0,0,0,0,0,0}};
    int index = alinear(arrayEx2_2);
    printf("%d", index);
    */

    //Exercise #3
    int container_1[5] = {2,4,2,1,3};
    int container_2[5] = {4,2,5,1,0};
    rotate(container_2, 5, 2);
    for(int i = 0; i < 5; i++)
        printf("%d ", container_2[i]);

    return 0;
}