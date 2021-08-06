/*
Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
ganharia do prêmio com base no valor investido.
*/
//vt3 = valor total investidos pelos 3 jogadores;
//j1, j2, j3 = jogadores.

#include <stdio.h>
#define MONTANTE_DA_LOTERIA 350000

int main() {
    //declaração de variáveis
    float j1, j2, j3, vt3;

    //entrada
    printf("Digite o montante investido pelo primeiro jogador: ");
    scanf("%f", &j1);
    printf("Digite o montante investido pelo segundo jogador: ");
    scanf("%f", &j2);
    printf("Digite o montante investido pelo terceiro jogador: ");
    scanf("%f", &j3);

    //processamento
    vt3 = (j1 + j2 + j3);
    j1 = j1 / vt3 * MONTANTE_DA_LOTERIA;
    j2 = j2 / vt3 * MONTANTE_DA_LOTERIA;
    j3 = j3 / vt3 * MONTANTE_DA_LOTERIA;

    //saida
    printf("O total que jogador 1 ganhou do premio foi %.2f\n", j1);
    printf("O total que jogador 2 ganhou do premio foi %.2f\n", j2);
    printf("O total que jogador 3 ganhou do premio foi %.2f\n", j3);

    return 0;
}