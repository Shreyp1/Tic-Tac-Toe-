#include<stdio.h>
#include<stdlib.h>
#include "fn.h"

int main()
{
    reserBoard();
    while (winner == 0 || count == 10) {
        printBoard();
        playerMove1();
        printBoard();
        checkWinner1();
        playerMove2();
        checkWinner2();
    }
    return 0;
}