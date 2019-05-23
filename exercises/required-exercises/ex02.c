#include <stdio.h>

int main() {
    int a, b, c;
    printf("digite um número a: ");
    scanf("%d", &a);
    printf("digite um número b: ");    
    scanf("%d", &b);
    printf("digite um número c: ");    
    scanf("%d", &c);
    printf("O maior número é: %s\n", ((a > b && a > c) ? "a" : (b > a && b > c) ?  "b" : (c > a && c > b) ?  "c" : "todos iguais" ));
    return 0;  
}