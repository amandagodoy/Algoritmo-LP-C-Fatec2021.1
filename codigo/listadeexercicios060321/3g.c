#include <stdio.h>

int main() {
    int a = 5, b = 2, c = 4, e = 3, g = 2, x;
    x = (a * b + g) / (c * e);
    printf("A multiplicação entre %d e %d somando com %d com o resultado da outra multiplicação entre %d e %d faz a divisão assim obtendo o total de %d\n", a, b, g, c, e,x);

    return 0;
}