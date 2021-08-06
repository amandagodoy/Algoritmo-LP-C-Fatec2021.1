#include <stdio.h>

int main() {
    int b = 2, c = 4, d = 6, e = 3, x;
    x = (d * b) % (c * e);
    printf("A multiplicação entre %d e %d com o resultado da outra multiplicação entre %d e %d faz o resto da divisão assim o total ser igual a %d\n", d, b, c, e,x);

    return 0;
}