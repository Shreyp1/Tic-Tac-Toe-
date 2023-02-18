#include<stdio.h>
#include<stdlib.h>
#include "fn.h"

int main()
{
    char winner = ' ';
    resetBoard();

    while (winner == ' ' && checkFreeSpaces() != 0) {
        printBoard();
        playerMove1();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0) {
            break;
        }

        playerMove2();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0) {
            break;
        }
    }
    printBoard();
    printWinner(winner);
    printf("Thanks for Playing!\n\n");

    return 0;
}