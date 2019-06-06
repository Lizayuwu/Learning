#include <stdio.h>

int main() {
    double x,y,z;
    x = y = 2;
    z = 1;
    
    printf("O resultado de %f == %f é: %s\n", x, y, x == y ? "true": "false");
    printf("O resultado de %f == %f é: %s\n", x, z, x == z ? "true": "false");
    return 0;
}