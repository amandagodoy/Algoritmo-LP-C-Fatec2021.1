/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversão é: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius. */
#include <stdio.h>

int main() {
    //declação de variáveis
    float c, f;
    //entrada
    printf("Digite o grau °C: ");
    scanf("%f", &c);
    //processamento
    f = c * 9.0 / 5.0 + 32.0;
    //saída
    printf("O valor convertido para Fahrenheit %.2f é: \n", f);

    return 0;
}