//sem validar as entradas

#include <stdio.h>

int main() {
    float valor_compra, desconto, acrescimo;
    short int opcao_pagamento, numero_parcelas;
    char forma_pagamento;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    printf("Digite 1 para pagamento a vista e 2 para pagamento a prazo: ");
    scanf("%hd", &opcao_pagamento);

    if(opcao_pagamento == 1) {
        printf("Digite b para boleto ou c para cartão: ");
        scanf(" %c", &forma_pagamento);
        if(forma_pagamento == 'b' || forma_pagamento == 'B') {
            desconto = 0.10 * valor_compra;
            printf("Desconto: R$ %.2f \nValor a pagar: R$ %.2f", desconto, valor_compra - desconto);

        } else if(forma_pagamento == 'c' || forma_pagamento == 'C') {
            desconto = 0.05 * valor_compra;
            printf("Desconto: R$ %.2f \nValor a pagar: R$ %.2f\n", desconto, valor_compra - desconto);
        } else {
            printf("Escolha invalida, vamos começar novamente\n");
        }

    } else if(opcao_pagamento == 2) {
        printf("Digite o número de parcelas: ");
        scanf("%hd", &numero_parcelas);
        if(numero_parcelas == 2) {
            printf("Valor total = R$ %.2f \nValor de cada prestação = R$ %.2f\n", valor_compra, valor_compra/2);

        } else if(numero_parcelas == 3) {
            acrescimo = 0.05 * valor_compra;
            printf("Valor do acrescimo = R$ %.2f\nValor total = R$ %.2f\nValor de cada prestação = R$ %.2f\n",acrescimo, valor_compra+acrescimo, (valor_compra+acrescimo)/3);

        } else if(numero_parcelas == 4) {
            acrescimo = 0.10 * valor_compra;
            printf("Valor do acrescimo = R$ %.2f\nValor total = R$ %.2f\nValor de cada prestação = R$ %.2f\n",acrescimo, valor_compra+acrescimo, (valor_compra+acrescimo)/4);
        } else {
            printf("Numero de parcelas invalido, vamos começar novamente:\n");
        }
    } else {
        printf("Opção inválida, vamos começar novamente");
    }

    return 0;
}