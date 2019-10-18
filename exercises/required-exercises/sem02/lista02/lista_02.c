#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#define true 1
#define false 0
#define bool int

char* convertToNotation(float number) {
    char* notations[4] = {"B","KB", "MB", "GB"};
    int numSize = 0;
    bool done = false;
    while(!done) {
        if(number >= 1024) {
            number /= 1024;
            numSize++;
        } else {
            done = true;
            printf("%.3f %s",number, notations[numSize] );
        }
    }
}
    
void ex01() {
    unsigned long long addresses;
    unsigned long long addressBitSize;
    unsigned long long memorySize;

    printf("Starting exercise exercise 01:\n");

    printf("Digite a quantidade de endereços na memória principal.\n");
    scanf("%llu", &addresses);
    
    printf("Digite o tamanho das celulas do computador.\n");
    scanf("%llu", &addressBitSize);
    
    memorySize = addresses * addressBitSize;

    // printf("%lld %s\n",memorySize, convertToNotation(memorySize));
    printf("the memory has a capacity of: ");
    convertToNotation(memorySize);
    printf("\n");
    printf("The address size is: %.0LF B\n", log2l(memorySize));
    printf("O tamanho do REM é: %.0LF B\n", log2l(memorySize));
    printf("O tamanho do RDM é: ");
    convertToNotation(addressBitSize);
    printf("\n");
    return;    
}

void ex02() {
    unsigned long long lineNumber;
    unsigned long long lineSize;
    unsigned long long memorySize;
    //cell amount = 2 ^ address size
    printf("Starting exercise 02:\n");

    printf("please tell the principal memory size in bytes:\n");
    scanf("%lld", &memorySize);
    printf("Please tell how many lines the cache has:\n");
    scanf("%lld", &lineNumber);
    printf("please tell the cache line size:\n");
    scanf("%lld", &lineSize);
    
    printf("tag: %.0Lf\tlinha: %.0Lf\t palavra: %.0Lf\n", log2l(lineNumber/lineSize), log2l(lineNumber), log2l(memorySize));
    // O tamanho da memória principal em bytes;
    // O número de linhas da memória cache;
    // A largura da linha da memória cache em bytes;
    return;    
}

void ex03() {
    printf("Starting exercise exercise 03:\n");

    return;    
}

void ex04() {
    printf("Starting exercise exercise 04:\n");

    return;    
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    // ex01();
    ex02();
    ex03();
    ex04();
    return 0;
}

