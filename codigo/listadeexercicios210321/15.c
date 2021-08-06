/*
Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão
é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14.
*/

#include <stdio.h>
#define PI 3.14

int main() {
    //declaração de variáveis
    float ar, r;

    //entrada
    printf("Digite um ângulo em radianos: ");
    scanf("%f", &r);

    //processamento
    ar = r * 180 / PI;

    //saída
    printf("O ângulo convertido em graus é %.2f\n", ar);

    return 0;
}