#include <stdio.h>

int main() {
    int i = 0, num = 9;
    while(i++ < 10) printf("%d x %d = %d\n", i, num, i * num);
    return 0;
}