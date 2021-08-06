/*
3. Ler um número real x e mostrar o valor de seu inverso, ou seja, 1/x. Caso o número lido seja 0, mostrar mensagem de erro.
*/
#include <stdio.h>

int main() {
    float x, inverso;

    printf("Informe um valor: ");
    scanf("%f", &x);

    inverso = 1 / x;

    if(x == 0) {
        printf("Erro. Valor informado invalido\n");
    } else {
        printf("O inverso do valor informado é %.2f\n", inverso);
    }

    return 0;
}
