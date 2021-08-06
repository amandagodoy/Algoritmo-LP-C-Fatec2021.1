/*
Leia um valor de volume em metros cúbicos m 3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000 ∗ M , sendo L o volume em litros e M o volume em
metros cúbicos.
*/

#include <stdio.h>

int main() {
    //declaração de variáveis
    float m, l;

    //entrada
    printf("Digite o valor do volume em metros cubicos: ");
    scanf("%f", &m);

    //processamento
    l = 1000 * m;

    //saída
    printf("O volume convertido em litros e %.2f\n", l);


    return 0;
}