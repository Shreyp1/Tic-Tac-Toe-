#include "fn.h"
void printWinner(char p) {
    if (winner == p) {
        printf("Player 1 (X) wins!!!\n");
    }
    else if (winner == p) {
        printf("Player 2 (O) wins!!!\n");
    }
    else printf("Tie!!\n");
}