#include <stdio.h>

int main() {
    int i = 1, num, fac = 1;
    printf("digitai qual kek voce quer fatoriar\n");
    scanf("%d", &num);
    for (i; i <= num; i++) {
        fac *= i;
    }
    printf("fac: %d\n", fac);
    return 0;
}