#include<stdio.h>
void resetBoard();
char checkWinner();
void playerMove1();
void playerMove2();
void printWinner(char);
void printBoard();

int count = 1;
char board[3][3];
char winner = ' ';
const char p1 = 'X';
const char p2 = 'O';

