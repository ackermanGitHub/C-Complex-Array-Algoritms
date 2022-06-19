#include<stdio.h>
#include "./logic/logic.c"

int main(void){
     
    // Exercise #1
    printf("Exercise 1\n");
    binaryConverter(234);

    // Exercise #2
    printf("\nExercise 2\n");
    binaryConverter1(40, 8);

    // Exercise #3
    printf("\nExercise 3\n");
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int logicSize = 10;
    int waysToSum10 = threeSum(arr, logicSize, 10);
    printf("%d\n", waysToSum10);
   
    // Exercise #4
    char hello[] = "HELLO";
    int logicSize1 = 5;
    cesarCodifier(hello, logicSize1);
    
    return 0;
}