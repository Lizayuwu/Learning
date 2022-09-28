#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
// Faça uma sub-rotina que leia cinco valores inteiros, determine e mostre o maior e o
// menor deles.

void ex01() {
    int r = 5;

    int min = __INT_MAX__;
    int max = -__INT_MAX__;
    int i;
    int arr[r];
    for(i = 0; i < r; i++) {
        printf("digite um numero: ");
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < r; i++) {

        if (arr[i] > max) {
            max = arr[i];
        }
        
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("min: %d\nmax: %d\n", min, max);
}

// Faça uma sub-rotina que receba como parâmetro uma matriz A(5,5) e retorne a soma
// de seus elementos.

int ex02(int arr[5][5]) {
    int sum = 0;
    int i;
    int j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            sum += arr[i][j];     
        }    
    }
    return sum;
}

// Crie um programa que carregue uma matriz 3X4 com números reais. Utilize uma
// função para copiar todos os valores da matriz para um vetor de 12 posições. Esse vetor
// deverá ser mostrado no programa principal.

float* ex03(float board[3][4]) {
    float* transposedArray = malloc(3*4*sizeof(float));
    int i;
    int j;
    for(i = 0;i < 3;i++) {
        for(j = 0;j < 4;j++) {
            // printf("(1+i)+j: %d\n", (i*4)+j);
            transposedArray[(i*4)+j] = board[i][j];
//            printf("[%d]", transposedArray[(i*4)+j]);
        }
//        printf("\n");
    }
    return transposedArray;
}

// Faça um programa contendo uma sub-rotina que receba dois valores numéricos e um
// símbolo. Esse símbolo representará a operação que se deseja efetuar com os
// números. Se o símbolo for +, deverá ser realizada uma adição, e, se for *, deverá ser
// efetuada uma multiplicação. O resultado deverá ser mostrado no programa principal.

float ex04(float num1, float num2,char *operation){
    if(strcmp(operation, "*") == 0) {
    	return num1 * num2;
	} else if(strcmp(operation, "+") == 0) {
    	return num1 + num2;
	} else {
		printf("Not supported\n");
	}
}

// Crie uma sub-rotina que receba como parâmetro um vetor A de 25 números inteiros
// e substitua todos os valores negativos de A por zero. O vetor resultante deverá ser
// mostrado no programa principal.

int* ex05(int arr[25]) {
    int* positiveOnlyArr = malloc(25 * sizeof(int));
    int i;
    for(i = 0; i < 25; i++) {
        if(arr[i] < 0) {
            arr[i] = 0;
        }
        positiveOnlyArr[i] = arr[i];
    }
    return positiveOnlyArr;
}

int main() {
	int num, num2;
	char *operandus = (char*) malloc(2);
    int i,j;
    int arr[5][5] = {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    float arrFloat[3][4] = {{1.5,3.5,1.2,7.5},{1.5,3.5,1.2,7.5},{1.5,3.5,1.2,7.5}};
    int arrPos[25] = {-1,-2,3,4,6,-1,-2,3,4,6,-1,-2,3,4,6,-1,-2,3,4,6,-1,-2,3,4,6};
    
    printf("ex01:\n");
    ex01();
    
    printf("ex02:\n");
    printf("%d\n",ex02(arr));
    
    printf("ex03:\n");
    float *floatArr = ex03(arrFloat);

    for(i = 0;i < 3;i++) {
        for(j = 0;j < 4;j++) {
            printf("%.3f\n", floatArr[(i*4)+j]);
        }
    }
    
    printf("ex04:\n");
    printf("Please write a number:");
    scanf("%d", &num);
    printf("Please write a number:");
    scanf("%d", &num2);
    printf("\n\n* - Multiply\n+ - addition\n");
    scanf("%s", operandus);
    printf("%f\n", ex04(num, num2, operandus));
    
    printf("ex05:\n");
	int *posOnlyArr = ex05(arrPos);
    for (i = 0; i < 25; i++)
    {
    	if( i % 5 == 0) printf("\n");
        printf("[%d]", posOnlyArr[i]);
    }
    
    return 0;
}
