#include <stdio.h>
#include <stdlib.h>

int main(){
    float custo_do_carro, custo_de_fabrica, porcentagem_do_distribuidor, porcentagem_de_impostos;

    printf("Digite o custo de fabrica de um carro: ");
    scanf("%f", &custo_de_fabrica);

    porcentagem_do_distribuidor = 0.28*custo_de_fabrica;

    porcentagem_de_impostos = 0.45*custo_de_fabrica;

    custo_do_carro = custo_de_fabrica + porcentagem_do_distribuidor + porcentagem_de_impostos;

    printf("\n\nO custo do carro e: %.2f", custo_do_carro);

    printf("\nO valor da porcentagem do distribuidor e: %.2f",porcentagem_do_distribuidor);

    printf("\nO valor dos impostos e: %.2f", porcentagem_de_impostos);

    return 0;
}