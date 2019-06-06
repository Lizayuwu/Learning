#include <stdio.h>

int main() {
    int i = 0, num, sum = 0;
    while(i < 10) {
        printf("Digitai vosso numero mais kek\n");
        scanf("%d", &num);
        sum += num;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}