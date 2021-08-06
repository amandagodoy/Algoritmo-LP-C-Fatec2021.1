/*
Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com des-
conto);
• a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração de variáveis
    float vp, vtd, cvv, cvp, vt;
    //entrada
    printf("Digite o valor total: ");
    scanf("%f", &vt);    

    //processamento
    vtd = vt * 0.09;
    vp = vt / 3;
    cvv = vtd * 0.05;
    cvp = vt * 0.05;

    //saida
    printf("O total a pagar com desconto de 10 porcento é %.2f\n", vtd);
    printf("O valor das parcelas em 3 vezes é %.2f\n", vp);
    printf("A comissão do vendedor, no caso da venda ser a vista e sendo que 5 porcento sobre o valor com desconto é %.2f\n", cvv);
    printf("a comissão do vendedor, no caso da venda ser parcelada e sendo que 5 porcento sobre o valor total é %.2f\n", cvp);

    return 0;
}