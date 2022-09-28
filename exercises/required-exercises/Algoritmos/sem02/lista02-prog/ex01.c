#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    srand(time(NULL));
    int min = __INT_MAX__;
    int max = -__INT_MAX__;
    int minI;
    int maxJ;
    int i;
    int j;

    double board[4][7];

    //generating a random board
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            board[i][j] = rand() % 100; // limited to 1..99 for testing
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if(board[i][j] < min) {
                min = board[i][j];
                minI = i;
            }
        }
    }

    for (i = 0; i < 7; i++)
    {
        if( board[minI][i] > max) {
            maxJ = i;
            max = board[minI][i];
        }  
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("[%.1f]", board[i][j]);
        }
        printf("\n");
    }
    
    printf("minmax: board[%d][%d]: %f\n", minI, maxJ, board[minI][maxJ]);
    return 0;
}