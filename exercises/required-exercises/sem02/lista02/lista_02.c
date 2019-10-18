#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
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

    printf("How many addresses does your computer have.\n");
    scanf("%llu", &addresses);
    
    printf("Tell me the computer's cell size are.\n");
    scanf("%llu", &addressBitSize);
    
    memorySize = addresses * addressBitSize;

    // printf("%lld %s\n",memorySize, convertToNotation(memorySize));
    printf("the memory has a capacity of: ");
    convertToNotation(memorySize);
    printf("\n");
    printf("The REM size is: %.0LF\n B", log2l(memorySize));
    return;    
}

void ex02() {
    printf("Starting exercise exercise 02:\n");

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
    ex01();
    ex02();
    ex03();
    ex04();
    return 0;
}

