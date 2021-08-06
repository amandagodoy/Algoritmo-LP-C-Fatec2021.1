#include <stdio.h>
#include <locale.h>

int main() {
    unsigned int total_dia, ano, mes, dias, resto;
    printf("Digite os dias: ");
    scanf("%u", &total_dia);

    ano =  total_dia / 365;
    resto = total_dia % 365;

    mes = resto / 30;
    dias = resto % 30;

    printf("%u anos %u mês, %u dias\n", ano, mes, dias);

    return 0;
}