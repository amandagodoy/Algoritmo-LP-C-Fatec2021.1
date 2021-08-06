/*
1. Fazer um programa em C que lê o peso e a altura de uma
pessoa e verifica se ela está abaixo do peso, sendo IMC =
peso/altura² e abaixo do peso IMC <=18,5.
*/
#include <stdio.h>

int main() {
    float p, a, imc;

    printf("Informa seu peso: ");
    scanf("%f", &p); 

    printf("Informe sua altura: ");
    scanf("%f", &a);

    imc = p / (a * a);

    if(imc <= 18.5) {
        printf("O seu peso é %.2f e está abaixo\n", imc);
    } else {
        printf("O seu peso é %.2f e não está abaixo\n", imc);
    }

    return 0;
}