#include "fn.h"
void checkWinner2() {
     //For player 2(o)
        //rows
    if (((board[0][0] && board[0][1] && board[0][2]) || (board[1][0] && board[1][1] && board[1][2]) || (board[2][0] && board[2][1] && board[2][2])) == 'O') {
        winner = 1;
        printWinner('O');
    }
        //cols
    else if (((board[0][0] && board[1][0] && board[2][0]) || (board[0][1] && board[1][1] && board[2][1]) || (board[0][2] && board[1][2] && board[2][2])) == 'O') {
        winner = 1;
        printWinner('O');
    }
        //diagonals
    else if (((board[0][0] && board[1][1] && board[2][2]) || ((board[0][2] && board[1][1] && board[2][0]))) == 'O') {
        winner = 1;
        printWinner('O');
    }
}