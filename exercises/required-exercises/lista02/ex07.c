#include <stdio.h>

int main() {
    int i = 0, num = 7;
    for(i; i <= 10; i++) {
        printf("%d x %d = %d\n", i, num, i * num);
    }
    return 0;
}