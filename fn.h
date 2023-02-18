#include<stdio.h>
void resetBoard();
char checkWinner();
void playerMove1();
void playerMove2();
void printWinner(char);
void printBoard();
int checkFreeSpaces();


extern char board[3][3];
extern char winner;
extern const char p1;
extern const char p2;

