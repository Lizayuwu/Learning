#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#define true 1
#define false 0
#define bool int

char* convertToNotation(float number, int type) {
    char* notations[4] = {"B","KB", "MB", "GB"};
    char* notationsAlt[4] = {"b","Kb", "Mb", "Gb"};
    int numSize = 0;
    bool done = false;
    while(!done) {
        if(number >= 1024) {
            number /= 1024;
            numSize++;
        } else {
            printf("%.3f %s",number, type == 1 ? notations[numSize] : notationsAlt[numSize] );
        }
    }
}
    
void ex01() {
    unsigned long long addresses;
    unsigned long long addressBitSize;
    unsigned long long memorySize;

    printf("Starting exercise 01:\n");

    printf("Digite a quantidade de endereços na memória principal.\n");
    scanf("%llu", &addresses);
    
    printf("Digite o tamanho das celulas do computador.\n");
    scanf("%llu", &addressBitSize);
    
    memorySize = addresses * addressBitSize;

    // printf("%lld %s\n",memorySize, convertToNotation(memorySize));
    printf("the memory has a capacity of: ");
    convertToNotation(memorySize, 1);
    printf("\n");
    printf("The address size is: %.0LF b\n", log2l(memorySize));
    printf("O tamanho do REM é: ");
    convertToNotation(addressBitSize, 0);
    printf("\n");
    printf("O tamanho do RDM é: %.0LF b\n", log2l(addresses)); 
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
    
    printf("tag: %.0Lf\tlinha: %.0Lf\t palavra: %.0Lf\n",log2l(memorySize) - (log2l(lineNumber) + log2l(lineSize)), log2l(lineNumber), log2l(lineSize));
    // O tamanho da memória principal em bytes;
    // O número de linhas da memória cache;
    // A largura da linha da memória cache em bytes;
}

void ex03(){
    float mp, cc, mc, td, qlinha, qbloco, tt, t, endbloco;
    printf("Insira o tamanho da memória principal em bytes: \n");
    scanf("%f", &mp);
    printf("Insira a capacidade de memória cache em bytes: \n");
    scanf("%f", &cc);
    printf("Insira a largura das linhas da memória cache em bytes: \n");
    scanf("%f", &mc);

    td = cc * 8;
    qlinha = cc / mc;
    qbloco = mp / mc;
    endbloco = log2l (qbloco);
    tt = qlinha * endbloco;
    t = td + tt;

    printf("A memória cache necessita de %.2f Kbits\n", t);
}
void ex04(){

    float mp, cc, mc, td, qlinha, qbloco, tt, t, x, c, ltag;
    printf("Insira o tamanho da memória principal em bytes: \n");
    scanf("%f", &mp);
    printf("Insira a capacidade de memória cache em bytes: \n");
    scanf("%f", &cc);
    printf("Insira a largura das linhas da memória cache em bytes: \n");
    scanf("%f", &mc);
    printf("Insira a quantidade de linhas por conjunto: \n");
    scanf("%f", &x);

    td = cc * 8;
    qlinha = cc / mc;
    c = qlinha / x;
    qbloco = mp / mc;
    ltag = log2l (qbloco/ c);
    tt = qlinha * ltag;
    t = td + tt;
    printf("A quantidade necessaria para a implementação de cache com Mapeamento associativo por conjunto é de %.2f bits \n", t);
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    int selector;
    bool done = false;
    while(!done) {
        printf("Qual exercicio vós desejais executar neste atual momento:\n");
        printf("\t0 - Sair\n\t1 - exercicio 1\n\t2 - exercicio 2\n\t3 - exercicio 3\n\t4 - exercicio 4\n\t");
        scanf("%d", &selector);

        switch (selector) {
            case 0:
                printf("Obrigado por usar nosso programa!\n =)\n");
                return 1;
            case 1:
                ex01();
                break;
            case 2:
                ex02();
                break;
            case 3:
                ex03();
                break;
            case 4:
                ex04();
                break;
            default:
                printf("Esse exercicio não existe.\n");
                break;
        }
    }
    
    return 0;
}