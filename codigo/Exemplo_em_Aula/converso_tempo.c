#include <stdio.h>
#include <locale.h>

int main() {
    unsigned int tempo_total, hora, min, seg, resto;
    printf("Digite o tempo total: ");
    scanf("%u", &tempo_total);

    hora =  tempo_total / 3600;
    resto = tempo_total % 3600;

    min = resto / 60;
    seg = resto % 60;

    printf("%u segundos correspondem a %u horas, %u minutos, %u segundos\n", tempo_total, hora, min, seg);

    return 0;
}