// Ler um valor INTEIRO e dizer se ele é multiplo de 3 e de 5.

#include <stdio.h>

int main() {

    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0) {
        printf("%d é multiplo de 3 e 5\n", n);
    } else {
        printf("%d não é multiplo de 3 e 5\n", n);
    }

    return 0;
}