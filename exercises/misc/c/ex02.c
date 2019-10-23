#include <stdio.h>

int main() {
    int x,y,z;

    x = y = 10;                          //x, y = 10
    z = ++x;                             //z = 11 | ++x ( x = 11)
    x = -x;                              //x = -11
    y++;                                 //y++ | y = 11
    x = x+y-(z--);                       //x = -11+11-(11) | z-- (z = 10)
    printf("x=%d, y=%d, z=%d", x, y, z); //prints x=-11, y=11, z=10
    return 0;
}