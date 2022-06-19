#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main(){
    
    unsigned seed = time(NULL); // Seed created to change random numbers.

    int face, roll, frequency[SIZE] = {0};
    
    srand(seed); //  Seeds the random number generator used by the function rand

    printf("The seed taken from time function is: %d\n",seed);

    for (roll = 1; roll <= 6000; roll++) {
        face = rand() % 6 + 1; // Create the random number from 1 to 6
        ++frequency[face];
    }

    printf("%s%17s\n", "Face", "Frequency");
    for (face = 1; face <= SIZE - 1; face++)
        printf("%4d%17d\n", face, frequency[face]);   
   
    return 0;
}