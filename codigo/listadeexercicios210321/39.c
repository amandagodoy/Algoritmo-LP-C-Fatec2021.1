/*
A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
• O primeiro ganhador receberá 46%;
• O segundo receberá 32%;
• O terceiro receberá o restante (22%);
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

#include <stdio.h>
#define PREMIO 780000.00

int main() {
    //declaração de variáveis
    float ganhador1, ganhador2, ganhador3;

    //processamento
    ganhador1 = PREMIO * 0.46;
    ganhador2 = PREMIO * 0.32;
    ganhador3 = PREMIO * 0.22;

    //saida
    printf("O montante que o ganhador 1 foi %.2f\n", ganhador1);
    printf("O montante que o ganhador 2 foi %.2f\n", ganhador2);
    printf("O montante que o ganhador 3 foi %.2f\n", ganhador3);

    return 0;
}