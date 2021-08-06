#include <stdio.h>
#include <locale.h>

int main() {
    unsigned int valor_saque, cem, cinquenta, vinte, dez, resto;
    printf("Digite o valor do saque: ");
    scanf("%u", &valor_saque);

    cem =  valor_saque / 100;
    resto = valor_saque % 100;

    cinquenta = resto / 50;
    resto = resto % 50;

    vinte = resto / 20;
    vinte = resto % 20;

    dez = resto / 10;

    printf("Valor de notas 100 = %u\n", cem);
    printf("Valor de notas 50 = %u\n", cinquenta);
    printf("Valor de notas 20 = %u\n", vinte);
    printf("Valor de notas 10 = %u\n", dez);

    return 0;
}