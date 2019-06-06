#include <stdio.h>

int main() {
    int i = 0, num;
    while(i < 10) {
        printf("Digitai vosso numero mais kek\n");
        scanf("%d", &num);
        i++;
    }
    printf("10\n"); // do you really want this?
    // printf("%d", i); // or this
    return 0;
}