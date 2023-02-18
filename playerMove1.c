#include "fn.h"
void playerMove1() {
    int x,y;
    char p1 = 'X';
    char p2 = 'O';
    // printf("Enter row(1-3): ");
    // scanf("%d",&x);
    // printf("Enter column(1-3): ");
    // scanf("%d",&y);

    // count++;

    // board[x][y] = 'X';
    do {
        printf("Enter row #(1-3): ");
        scanf("%d",&x);
        x--;
        printf("Enter column #(1-3): ");
        scanf("%d",&y);
        y--;

        if (board[x][y] != ' ') {
            printf("Invalid move\n");
        }
        else {
            board[x][y] = p1;
            break;
        }
    } while (board[x][y] != ' ');
}