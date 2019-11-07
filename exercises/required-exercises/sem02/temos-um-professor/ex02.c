#include <stdio.h>

int main() {
    int arrSize = 5;
    int x[arrSize], y[arrSize], z[arrSize * 2];
    for (int i = 0; i < arrSize; i++){
        printf("Please kill yourself\n");
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < arrSize; i++){
        printf("Please kill yourself\n");
        scanf("%d", &y[i]);
    }
    for (int i = 0; i < arrSize; i++){
        z[i] = x[i];
        z[i + arrSize] = y[i];
    }
    for (int i = 0; i < arrSize * 2; i++) {
        printf("%d\n", z[i]);
    }
    
    return 0;
}