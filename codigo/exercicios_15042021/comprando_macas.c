/*
2. Maçãs custam 30 centavos quando a quantidade comprada for menor que uma dúzia e 25 centavos, caso contrário. Ler a quantidade de maçãs compradas, calcular e mostrar o valor a ser pago.
*/
#include <stdio.h>

int main() {
    float macas_compradas, valor_pago;

    printf("Informe quantidade de maças: ");
    scanf("%f", &macas_compradas);

    if(valor_pago >= 12) {
        valor_pago = macas_compradas * 0.30;
        printf("O valor pago é de %.2f\n", valor_pago);
    } else {
        valor_pago = macas_compradas * 0.25;
        printf("O valor pago é de %.2f\n", valor_pago);
    }

    return 0;
}