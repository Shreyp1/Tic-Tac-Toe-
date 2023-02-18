#include<stdio.h>
void resetBoard();
char checkWinner();
void playerMove1();
void playerMove2();
void printWinner(char);
void printBoard();
int checkFreeSpaces();


char board[3][3];
char winner;
const char p1;
const char p2;

