#include "fn.h"
void playerMove1() {
    int x,y;
    printf("Enter row(1-3): ");
    scanf("%d",&x);
    printf("Enter column(1-3): ");
    scanf("%d",&y);

    count++;

    board[x][y] = 'X';
}