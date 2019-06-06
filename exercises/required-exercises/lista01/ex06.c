#include <stdio.h>

//Some os 20 primeiros termos da série

//  oo
// ----
// \      1
//  >   -----
// /      i²
// ----
//  i=1

int main() {
    long double sum = 0;
    long double iSquared;
    for (int i = 1; i <= 20; i++) {
        iSquared = i * i;
        sum += 1/iSquared ;
    }
    printf("%Lf\n", sum);
    return 0;
}