/*
Tendo como dados de entrada a altura e o sexo de uma pessoa (‘M’ ou ‘F’), construir um programa em C que calcula seu peso ideal, utilizando as seguintes fórmulas:

Para homens: (72.7*h) - 58
Para mulheres: (62.1*h) - 44.7 
(h = altura)
*/
#include <stdio.h>

int main() {

    float altura, peso_ideal;
    char sexo;
    printf("Digite uma altura: ");
    scanf("%f", &altura);
    printf("Digite 'M' para Masculino ou 'F' Feminino: ");
    scanf(" %c", &sexo);

    if (sexo == 'm' || sexo == 'M') {
        peso_ideal = 72.7 * altura - 58;
        printf ("Neste caso o peso ideal e %.2f", peso_ideal);
    }
    else {
        peso_ideal = 62.1 * altura - 44.7;
        printf ("Neste caso o peso ideal e %.2f", peso_ideal);
    }

    return 0;
}

/*int main() {

    float altura, peso_ideal;
    char sexo;
    printf("Digite uma altura: ");
    scanf("%f", &altura);
    printf("Digite 'M' para Masculino ou 'F' Feminino: ");
    scanf(" %c", &sexo);

    if (sexo == 'm' || sexo == 'M') {
        peso_ideal = 72.7 * altura - 58;
    }
    else {
        peso_ideal = 62.1 * altura - 44.7;
    }
    printf("Neste caso o peso ideal é %.2f\n", peso_ideal);

    return 0;
}*/