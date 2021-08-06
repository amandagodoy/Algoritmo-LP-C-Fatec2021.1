// Ler um número qualquer e mostrar se ele é positivo (maior ou igual a 0) ou negativo.

#include <stdio.h>

int main() {
    int y;

    printf("Digite um valor: ");
    scanf("%d", &y);

    if(y >= 0) {
        printf("seu valor digitado é positivo");
    } else {
        printf("seu valor digital é negativo");
    }

    return 0; 
}