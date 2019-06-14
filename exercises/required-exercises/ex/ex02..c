#include <stdio.h>
#include <string.h>

//Dadas a altura e o sexo de uma pessoa, determinar seu peso ideal, utilizando as seguintes
//formulas:
//	Homens: (72,7 * altura) . 58;
//	Mulheres: (62,1 * altura) . 44,7;

int main() {
	char * gender = (char *) malloc(10);
	float altura;
	printf("Digitai vosso genero biologico mais kek (m/f)\n");
	gets(gender);
	printf("Digitai vossa altura bem kek mesmo, pode ser em metros meu parsa favor nao digitar centimetros nao sei calcular com centimetros. obrigado\n");
	scanf("%f", &altura);
	if(strstr("m", gender) != 0|| strstr("M", gender) !=0) {
		printf("Vosso peso kek eh de %f\n", (72.7 * altura) - 58);
	} else {
		printf("Vosso peso kek eh de %f\n", (62.1 * altura) - 44.7);
	}
	printf("%s, %f\n", gender, altura);
	return 0;
}
