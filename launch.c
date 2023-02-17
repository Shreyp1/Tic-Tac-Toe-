#include<stdio.h>
#include<stdlib.h>
#include "fn.h"

int main()
{
    int count = 1;
    reserBoard();
    while (winner == 0 || count == 10) {
        printBoard();
        playerMove1();
        printBoard();
        checkWinner();
    }
    return 0;
}