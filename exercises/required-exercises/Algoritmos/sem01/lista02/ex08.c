#include <stdio.h>

int main() {
    int i = 100;
    for( i; i <= 200; i++) if (i % 2 == 0) printf("%d\n",i);
    return 0;
}