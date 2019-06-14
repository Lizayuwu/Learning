#include <stdio.h>

/*
Supondo que a popula��o de um pa�s A seja de 50.000.000 de habitantes com uma taxa
anual de crescimento de 3% e que a popula��o de um pa�s B seja de 100.000.000 de
habitantes com uma taxa anual de crescimento de 1,5%. Fa�a um algoritmo que calcule e
escreva o n�mero de anos necess�rios para que a popula��o do pa�s A ultrapasse ou iguale a
popula��o do pa�s B, mantidas essas taxas de crescimento.
*/
int main() {
	float paisA = 50000000;
	float paisB = 100000000;
	const float TAXA_CRESCIMENTO_A = 1.03;
	const float TAXA_CRESCIMENTO_B = 1.015;
	int anos = 0;
	while(paisA < paisB) {
		paisA = paisA * TAXA_CRESCIMENTO_A;
		paisB = paisB * TAXA_CRESCIMENTO_B;
		anos++;
	}
	printf("Demorara %d anos para a populacao do pais A alcancar o pais B", anos);
	return 0;
}
