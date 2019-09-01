#include <stdio.h>

// Exiba a tabuada de um número fornecido pelo usuário.

int main() {
    int a;
    printf("Please input a number: ");
    scanf("%d", &a);
        printf("+--------------+\n");
    for(int i = 0; i <= 10; i++) {
        printf("    %d * %d = %d\n", a, i, a*i);
    }
        printf("+--------------+\n");
    return 0;
}