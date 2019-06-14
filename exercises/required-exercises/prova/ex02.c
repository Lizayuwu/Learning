#include <stdio.h>

/*
Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular a
partir de 3 notas. Opções de média:
1. Aritmética: ((nota1+nota2+nota3)/3).
2. Ponderada (3,4,3): ((nota1*3 + nota2*4 + nota3*3)/10).
3. Harmônica: (3/(1/nota1 + 1/nota2 + 1/nota3)).
Faça um algoritmo que leia as notas, a opção escolhida pelo usuário e calcule a média
*/

int main() {
	float notaA, notaB, notaC;
	int option = 0;
	printf("Digitai vossas notas keks para ver se vos passara de ano\n");
	scanf("%f", &notaA);
	printf("Digitai outra nota kek\n");
	scanf("%f", &notaB);
	printf("Digitai outra nota kek\n");
	scanf("%f", &notaC);
	if(notaA < 0 || notaB < 0 || notaC < 0) {
		printf("notas nao podem ser negativas");
		return 0;
	}
	while(option <= 0 || option > 3) {
		printf("Digite a maneira kek que queres que vossa nota seja transparecida\n");
		printf("\t1 - Aritmetica\n\t2 - Ponderada\n\t3 - Harmonica\n");
		scanf("%d", &option);	
	}
	
	switch(option) {
		case 1:
			printf("Sua nota eh: %f + %f + %f / 3 = %f", notaA, notaB, notaC, (notaA + notaB + notaC) / 3);
			break;
		case 2:
			printf("Sua nota eh: %f * 3 + %f * 4 + %f * 3 / 10 = %f", notaA, notaB, notaC, (notaA * 3 + notaB * 4 + notaC * 3) / 10);
			break;
		case 3:
			printf("Sua nota eh: 3 / (1/%f + 1/%f + 1/%f) = %f", notaA, notaB, notaC, 3 / (1/notaA + 1/notaB + 1/notaC));
			break;
	}
	return 0;
}
