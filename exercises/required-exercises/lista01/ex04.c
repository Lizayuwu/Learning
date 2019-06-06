#include <stdio.h>


// Escreva um programa que leia um número real e responda se ele está entre 0 e 1 ou entre 3 e 5.

int main() {
    float a;
    printf("Please input a number: ");
    scanf("%f", &a);
    printf("%s", a > 0 && a < 1 ? "O número esta entre 0 e 1\n" : a > 3 && a < 5 ? "O número está entre 3 e 5\n" : "O número não está nem entre 0 e 1 nem entre 3 e 5\n");
    return 0;
}