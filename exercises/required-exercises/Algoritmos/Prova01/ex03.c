#include <stdio.h>
/*
Desenvolver um algoritmo para calcular a conta de água. O custo da água varia dependendo
se o consumidor é residencial, comercial ou industrial. A regra para calcular a conta é:
	1. Residencial: R$5,00 de taxa mais R$0,05 por m³ gastos.
	2. Comercial: R$500,00 para os primeiros 80 m³ gastos mais R$0,25 por m³ gastos.
	3. Industrial: R$800,00 para os primeiros 100 m³ gastos mais R$0,04 por m³ gastos.
O programa deverá ler o número da unidade do cliente, o consumo de água por metros
cúbicos e o tipo de consumidor: 1 - residencial, 2 - comercial e 3 - industrial. Como
resultado, imprima o número da unidade do cliente e o valor real a ser pago pelo mesmo.
*/

int main() {
	char * unidade = (char *) malloc(8);
	int tipoDeConsumidor, numeroDeUnidade;
	float gastoDeAgua;
	printf("Digitai vossa numero de unidade.\n");
	scanf("%s", unidade);
	printf("Digitai quanta agua vos gastou em metros cubicos\n");
	scanf("%f", &gastoDeAgua);
	if(gastoDeAgua < 0) {
		printf("Gasto invalido\n");
		return 0;
	}
	printf("Digitai o vosso tipo de consumidor:\n\t1 - Residencial\n\t2 - Comercial\n\t3 - Industrial\n");
	scanf("%d", &tipoDeConsumidor);
	if (tipoDeConsumidor <= 0 || tipoDeConsumidor > 3) {
		printf("Tipo de consumidor Inválido\n");
		return 0;
	}
	//gigantesco if ternário porquê é mais rápido que fazer normalmente.
	printf("A unidade: %s gastou %f m^3 de Agua, tendo um custo total de R$%f", unidade, gastoDeAgua, (tipoDeConsumidor == 1) ? 5.0 + gastoDeAgua * 0.05 : (tipoDeConsumidor == 2) ? (gastoDeAgua < 80) ? 500 : (500 + ((gastoDeAgua-80) * 0.25)) : gastoDeAgua < 100 ? 800 : 800 + ((gastoDeAgua-100) * 0.04));
	return 0;
}
