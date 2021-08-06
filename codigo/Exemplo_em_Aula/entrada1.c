#include <stdio.h>

int main() {
    int a, b;
    float x, y;
    char l1, l2;
    char palavra [12]

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("\nO numero digitado foi %d\n", a);

    printf("\nDigite um inteiro e um float\n");
    scanf("%d%f", &b, &x);

    printf("\nDigite uma letrinha: ");
    scanf(" %c", &l1); //o espaço é um consumidor de caracteres do buffer

    printf("\nDigite seu nome: ");
    scanf("%s", palavra); //cuidado nao tem o & para este

    printf()
    return 0;
}