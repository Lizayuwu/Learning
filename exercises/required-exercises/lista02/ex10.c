#include <stdio.h>
#include <stdlib.h>

int main() {
    char * date;
    date = (char *) malloc(11);
    scanf("%s", date);
    printf("%s\n", date);
    return 0;
}