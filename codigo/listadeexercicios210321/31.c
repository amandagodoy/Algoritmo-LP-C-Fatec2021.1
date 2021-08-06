//Leia um número inteiro e imprima o seu antecessor e o seu sucessor.

#include <stdio.h>

int main() {
    //declaração de variáveis
    int value, a, s;

    //entrada
    printf("Digite um valor: ");
    scanf("%d", &value);

    //processamento
    a = value - 1;
    s = value + 1;

    //saida
    printf("Segue o antecessor %d e o seu sucessor %d\n", a, s);

    return 0;
}