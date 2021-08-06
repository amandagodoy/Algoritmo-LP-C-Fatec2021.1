#include <stdio.h>

int main() {
    int a = 5, b = 2, c = 4, e;
    e = a % b * c;
    printf("O resto da divisão entre %d e %d, multiplicado por %d é igual %d\n", a, b, c, e);

    return 0;
}