//Leia um número real e imprima a quinta parte deste número.

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração de váriaveis
    int numb;
    float fifth_part;
    //entrada
    printf("Digite um numero inteiro: ");
    scanf("%i",&numb);
    //processamento
    fifth_part = ((float) numb / 5);
    //saída
    printf("\nA quinta parte do numero e: %.2f\n", fifth_part);

    return 0;
}