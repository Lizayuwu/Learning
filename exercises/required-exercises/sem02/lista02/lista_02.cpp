#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// char* convertToNotation(int number) {

// }

void ex01() {
    unsigned long long addresses;
    unsigned long long addressBitSize;
    unsigned long long memorySize;

    try
    {
        printf("How many addresses does your computer have.\n");
        scanf("%Ld", &addresses);
        
        printf("Tell me the computer's cell size are.\n");
        scanf("%Ld", &addressBitSize);

    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    


        
    printf("The memory can store: %d\n", addresses * addressBitSize);

    printf("Starting exercise exercise 01:\n");

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

