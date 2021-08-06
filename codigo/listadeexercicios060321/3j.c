#include <stdio.h>

int main() {
    int a = 5, b = 2, c = 4, e;
    e = (b % c) * a;
    printf("O resto da divisão entre %d e %d ao multiplicar com %d que vai ser igual a %d\n", b, c, a, e);

    return 0;
}