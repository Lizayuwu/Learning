#include <stdio.h>

int main() {
    int r = 8;
    int c = 8;
    int i;
    int j;
    int num;
    int board[r][c];
    int hasSymmetry = 1;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            board[i][j] = scanf("%d", &num); // limited to 1..99 for testing
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (!(board[i][j] == board[j][i])) {
                printf("the array is not symmetric");
                return 0;
            }
        }
    }
    

    printf("the array is symmetric\n");
    return 0;
}