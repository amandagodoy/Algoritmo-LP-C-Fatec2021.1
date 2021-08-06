#include <stdio.h>

int main() {
    int a = 5, b = 2, c = 4, e;
    e = c % (b * a);
    printf("A multiplicação entre %d e %d vai dar o resto da divisão com %d que vai ser igual a %d\n", b, a, c, e);

    return 0;
}