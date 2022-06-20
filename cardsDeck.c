#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define SUITS 4
#define FACES 13
#define CARDS 52



void shuffle1(int wDeck[][FACES]){
    int card, row, column;
    for(card = 1; card <= CARDS; card++) {
        row = rand() % SUITS;
        column = rand() % FACES;
        while(wDeck[row][column] != 0) {
            row = rand() % SUITS ;
            column = rand() % FACES;
        }
        wDeck[row][column] = card;
    }
}

void shuffle(int dec[][FACES]){
    int i = 0, file, column;
    while (i < CARDS){   
        file = rand() % SUITS;
        column = rand() % FACES;
        if(dec[file][column] == 0){
            dec[file][column] = i;
            i++;
        }
    }
}

void deal(int deck[][FACES], char *suit[], char *face[]){
    for (int i = 0; i < CARDS; i++){
        for (int j = 0; j < SUITS; j++){
            for (int k = 0; k < FACES; k++){
                if(deck[j][k] == i + 1){
                    printf("%s of %s\n", face[k], suit[j]);
                }
            }
        } 
    }
}

int main(void){
    
    srand(time(NULL));
    int deck[SUITS][FACES] = {0};
    char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    char *face[FACES] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Knight", "Queen", "King"};

    shuffle(deck);
    deal(deck, suit, face);



    /* 
    for (int i = 0; i < SUITS; i++)
    {
        for (int j = 0; j < FACES; j++)
        {
            printf("%3d ", deck[i][j]);
        }
        printf("\n");
    } 
    */

    return 0;
}