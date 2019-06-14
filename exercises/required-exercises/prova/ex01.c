#include <stdio.h>

/*
Fazer um algoritmo que dado os lados de um triângulo A, B e C. Dizer se os lados formam
um triângulo:
Retângulo = (A² = B² + C²).
Obtusângulo = (A² > B² + C²).
Acutângulo = (A² < B² + C²).
*/

int main() {
	float sideA, sideB, sideC;
	
	printf("Digitai o vosso lado de triangulo mais kek.\n");
	scanf("%f", &sideA);
	printf("Digitai o vosso lado de triangulo mais kek.\n");
	scanf("%f", &sideB);
	printf("Digitai o vosso lado de triangulo mais kek.\n");
	scanf("%f", &sideC);
	
	if(sideA <= 0 || sideB <= 0 || sideC <= 0) {
		printf("Um triangulo nao pode ter um lado negativo");
		return 0;
	} 
	
	if((sideA * sideA) == ((sideB * sideB) + (sideC * sideC)) || (sideB * sideB) == ((sideA * sideA) + (sideC * sideC)) || (sideC * sideC) == ((sideB * sideB) + (sideA * sideA))) {
		printf("retangulo");
	} else
	if ((sideA * sideA) > ((sideB * sideB) + (sideC * sideC)) || (sideB * sideB) > ((sideA * sideA) + (sideC * sideC)) || (sideC * sideC) > ((sideB * sideB) + (sideA * sideA))) {
		printf("obtsangulo");
	} else
	if ((sideA * sideA) < ((sideB * sideB) + (sideC * sideC)) || (sideB * sideB) < ((sideA * sideA) + (sideC * sideC)) || (sideC * sideC) < ((sideB * sideB) + (sideA * sideA))) {
		printf("acutangulo");
	}
	return 0;
}
