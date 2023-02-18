#include "fn.h"
void checkWinner1() {
    //For player 1(x)
        //rows
    if ((board[0][0] && board[0][1] && board[0][2]) == 'X') {
        winner = 1;
        printWinner('X');
    }
    else if((board[1][0] && board[1][1] && board[1][2]) == 'X') {
        winner = 1;
        printWinner('X');
    }
    else if((board[2][0] && board[2][1] && board[2][2]) == 'X') {
        winner = 1;
        printWinner('X');
    }
        //cols
    else if ((board[0][0] && board[1][0] && board[2][0]) == 'X') {
        winner = 1;
        printWinner('X');
    }
    else if((board[0][1] && board[1][1] && board[2][1]) == 'X') {
        winner = 1;
        printWinner('X');
    }
    else if((board[0][2] && board[1][2] && board[2][2]) == 'X') {
        winner = 1;
        printWinner('X');
    }
    
        //diagonals
    else if ((board[0][0] && board[1][1] && board[2][2]) == 'X') {
        winner = 1;
        printWinner('X');
    }
    else if ((board[0][2] && board[1][1] && board[2][0]) == 'X') {
        winner = 1;
        printWinner('X');
    }
}