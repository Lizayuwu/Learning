#include <stdio.h>
#include <string.h>
// Escreva um algoritmo que leia um caracter e informe se este é uma vogal ou uma consoante.

int main() {
	int i = 0;
	char ptr;
	char * ptr2 = "aeiou";
	scanf("%c", &ptr);
	if (strstr( ptr2, &ptr) != 0 ) {
		printf("vogal\n");
		return 0;
	}
	printf("consoante\n");
	return 0;
}
