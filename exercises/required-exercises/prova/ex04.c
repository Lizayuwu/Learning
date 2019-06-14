#include <stdio.h>
/*
A conversão de graus Fahrenheit para centígrados e obtido por C = 5 / 9 ( F – 32 ). Fazer um
algoritmo que calcule e escreva uma tabela de centígrados em função de graus Fahrenheit,
que variam de 50 a 120 de 1 em 1.
*/

int main() {
	int i = 50;
	double c;
	for(i;i <= 120; i++) {
		c = (5.0 / 9.0) * ( i - 32.0);
		printf("%d°F = %lf°C\n", i, c);
	}
	return 0;
}
