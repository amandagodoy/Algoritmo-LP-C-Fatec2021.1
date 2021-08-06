// Ler o tamanho do lado de um quadrado e imprimir como resultado a sua área

#include <stdio.h>

int main() {
    //declaração de variáveis
    float l, a;
    //entrada
    printf("Digite o valor para o seu lado: ");
    scanf("%f", &l);
    //processamento
    a = l * l;
    //saída
    printf("A area do quadrado é %.2f e o lado é %.2f\n", a, l);

    return 0;
}