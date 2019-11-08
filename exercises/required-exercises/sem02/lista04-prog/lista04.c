#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre
// os números primos e suas respectivas posições. (Vetor)

void ex01() {
    int i;
    int j;
    int divisors;
    int size = 9;
    int *arr = malloc(size*sizeof(int));
    for (i = 0; i < size; i++) {
        printf("Write a number:\n");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        divisors = 1;
        for(j = 1; j < arr[i];j++) {
            if(arr[i] % j == 0) {
                divisors++;
            }
        }
        if(divisors == 2) {
        	 printf("number: %d, position: %d divisors: %d\n", arr[i], i, divisors);
        }          

    }
}

// Faça um programa que monte os 10 primeiros termos da sequência de Fibonacci.
// (Estruturas de Repetição)
    
int fibo(int n) {
    if (n == 0) {
        return 0;
     } 
     if (n == 1) {
           return 1;
     }
     return fibo(n - 1) + fibo(n - 2);
}

// Faça uma função que receba um número inteiro por parâmetro e verifique se é par ou
// ímpar. (sub-rotinas)

void ex04(int num){
    printf("%s\n", (num % 2 == 0) ? "par" : "if");
}

// Faça uma função (sub-rotina) que receba por parâmetro um número inteiro e retorne
// a sua raiz quadrada. 

int ex05(int num) {
	return sqrt(num);
}

//Faça um programa que leia um número N que indica quantos valores inteiros e
//positivos devem ser lidos a seguir. Para cada número lido, mostre uma tabela
//contendo o valor lido e o fatorial desse valor.

void ex06() {
	int nWord;
	int i;
	int j;
	int w;
	int fac = 1;
	printf("write how many numbers you want to write.\n");
	scanf("%d", &nWord);
	int numArr[nWord][2];
	for(i = 0; i < nWord; i++) {
		fac = 1;
		scanf("%d", &j);
		for(w = j; w >= 1; w--) {
			fac = fac * w;
		}
		numArr[i][0] = j;
		numArr[i][1] = fac;
	}
	
	for(i = 0; i < nWord; i++) {
		printf("%d! = %d\n", numArr[i][0], numArr[i][1]);
	}
}

int main() {
    // ex01();
    // fibo(55);
//    ex04(32);
//	printf("%d\n",ex05(9));
	ex06();
    return 0;
}

