#include <stdio.h>

int main() {
    int i = 0, j, num, oddNumber = 0;
    printf("Digitai quantos kekes vos quereis digitar\n");
    scanf("%d", &j);
    if(j <= 0) {
        printf("Entao vos nao digitaras nenhum kek\n");
        return 0;
    }
    while(i < j) {
        printf("Digitai vosso numero mais kek\n");
        scanf("%d", &num);
        if (num % 2 != 0) oddNumber++;
        i++;
    }
    printf("foram digitados %d keks impares\n", oddNumber);
    return 0;
}