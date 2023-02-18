#include "fn.h" 
void playerMove2() {
    int a,b;
    // printf("Enter row(1-3): ");
    // scanf("%d",&a);
    // printf("Enter column(1-3): ");
    // scanf("%d",&b);

    // count++;
    // board[a][b] = 'O';
    do {
        printf("Enter row #(1-3): ");
        scanf("%d",&a);
        a--;
        printf("Enter column #(1-3): ");
        scanf("%d",&b);
        b--;

        if (board[a][b] != ' ') {
            printf("Invalid move");
        }
        else {
            board[a][b] = p2;
            break;
        }
    } while (board[a][b] != ' ');
}