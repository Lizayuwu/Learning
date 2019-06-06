#include <stdio.h>

int main() {
    int i = 0, num = 5;
    do {
        printf("%d x %d = %d\n", i, num, i * num);
    } while(i++ < 10);
    return 0;
}