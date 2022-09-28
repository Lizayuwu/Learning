#include <stdio.h>

int main() {
    int i, j, cap = 10;
    for (i = 0; i <= cap; i++) {
        for ( j = 0; j <= cap; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}