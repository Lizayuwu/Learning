#include <stdio.h>

int main() {
    int x[10], y[10], z[10];

    for (int i = 0; i < 10; i++){
        printf("Please kill yourself\n");
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < 10; i++){
        printf("Please kill yourself\n");
        scanf("%d", &y[i]);
    }
    for (int i = 0; i < 10; i++){
        z[i] = x[i] + y[i];
        printf("x[%d] + y[%d] = %d\n", i, i, z[i]);
    }
    return 0;
}