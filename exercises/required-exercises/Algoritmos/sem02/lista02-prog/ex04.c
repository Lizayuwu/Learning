#include <stdio.h>

int main() {
    int r = 8;
    int c = 8;
    int i;
    int j;
    int num = 0;
    int board[r][c];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d == %d\t %d %d\n", board[i][j], board[j][i], i, j);
            if (!(board[i][j] == board[j][i])) {
                printf("the array is not symmetric");
                return 0;
            }
        }
    }

    printf("the array is symmetric\n");
    return 0;
}