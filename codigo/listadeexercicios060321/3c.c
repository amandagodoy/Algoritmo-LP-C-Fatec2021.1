#include <stdio.h>

int main() {
    int b = 2,c = 4,d = 6, e;
    e = (d / b) - (c % b);
    printf("A divisão entre %d e %d menos o resultado do resto da divisão entre %d e %d, o total é igual a %d\n", d,b,c,b,e);

    return 0;
}