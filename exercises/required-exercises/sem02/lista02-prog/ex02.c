#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define bool int
#define true 1
#define false 0

/*       c  c  c  c  c
linha   [ ][ ][ ][ ][ ]
linha   [ ][ ][ ][ ][ ]
linha   [ ][ ][ ][ ][ ]
linha   [ ][ ][ ][ ][ ]
*/


int main() {
    int r = 5;
    int c = 7;
    srand(time(NULL));
    int min = __INT_MAX__;
    int max = -__INT_MAX__;
    int i;
    int j;
    int minI;
    int minJ;
    int maxI;
    int maxJ;
    bool hasSaddlePoint = false;
    double board[r][c];

    //generating a random board
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            board[i][j] = rand() % 100; // limited to 1..99 for testing
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++) 
        {
            if (!j) {
                minI=i;
                minJ=j;
            } else {
                if (board[minI][minJ] > board[i][j]) {
                    minI=i;
                    minJ=j;
                }
            }
        }

        maxI = minI;
        maxJ = minJ;

        for(j=0;j<r;j++) {
            if (board[j][maxJ] > board[maxI][maxJ])
                maxI = j;
        }

        if (board[minI][minJ] == board[maxI][maxJ]) {
            hasSaddlePoint = true;
            printf("sela: board[%d][%d] = %f\n", minI, minJ, board[minI][minJ]);
        }
    }
    if (!hasSaddlePoint)
	    printf("Nao existe ponto de sela.\n");
    


    return 0;
}