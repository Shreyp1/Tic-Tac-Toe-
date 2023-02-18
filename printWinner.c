#include "fn.h"
void printWinner(char p) {
    if ('X' == p) {
        printf("Player 1 (X) wins!!!\n");
    }
    else if ('O' == p) {
        printf("Player 2 (O) wins!!!\n");
    }
    else printf("Tie!!\n");
}