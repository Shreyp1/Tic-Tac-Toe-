#include "fn.h"
void printWinner(char p) {
    if (p == 'X') {
        printf("Player 1 (X) wins!!!\n");
    }
    else if (p == 'O') {
        printf("Player 2 (O) wins!!!\n");
    }
}