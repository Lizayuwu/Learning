#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int r = 7;
    int c = 7;
    int min = __INT_MAX__;
    int max = -__INT_MAX__;
    int minI;
    int maxJ;
    int i;
    int j;

    int board[r][c];
    int maxArr[r];
    int minArr[r];
    //generating a random board
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            board[i][j] = rand() % 100; // limited to 1..99 for testing
        }
    }

    for (i = 0; i < r; i++) {
        int max = -__INT_MAX__;
        int min = __INT_MAX__;
        for (j = 0; j < c; j++) {
            if(board[i][j] > max) {
                max = board[i][j];
            }
            if(board[j][i] < min) {
                min = board[j][i];
            }
        }
        maxArr[i] = max;
        minArr[i] = min;
    }

    printf("board: \n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("[%d]", board[i][j]);
        }
        printf("\n");
    }
    printf("max: \n");

    for (i = 0; i < r; i++){
        printf("[%d]", maxArr[i]);
    }
    printf("\nmin:\n");
    
    for (i = 0; i < r; i++){
        printf("[%d]", minArr[i]);
    }
    printf("\n");

    return 0;
}