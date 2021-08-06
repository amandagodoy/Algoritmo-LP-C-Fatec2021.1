/*Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em
km/h e M em m/s.*/

#include <stdio.h>

int main() {
    //declaração de variáveis
    float vkm, m;

    //entrada
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &vkm);

    //processamento
    m = vkm / 3.6;

    //saida
    printf("A velocidade em m/s e %.2f\n", m);

    return 0;
}