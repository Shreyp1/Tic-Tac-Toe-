#include "fn.h" 
void playerMove2() {
    int a,b;
    printf("Enter row(1-3): ");
    scanf("%d",&a);
    printf("Enter column(1-3): ");
    scanf("%d",&b);

    count++;
    board[a][b] = 'O';
}