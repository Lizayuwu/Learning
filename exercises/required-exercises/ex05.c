#include <stdio.h>

// Calcule a área e perímetro de um retângulo com dados submetidos pelo usuário e imprima separadamente os resultados.

int main() {
    float width, heigth;
    float perimeter;
    float area;

    printf("Input the rectangle's width (in cm): ");
    scanf("%f", &width);
    printf("Input the rectangle's heigth (in cm): ");
    scanf("%f", &heigth);

    perimeter = width * 2 + heigth * 2;
    area = width * heigth;

    printf("The perimeter of the rectangle is: %f cm\n", perimeter);
    printf("The area of the rectangle is: %f cm²\n", area);
    return 0;
}