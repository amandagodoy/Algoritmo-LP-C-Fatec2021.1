//Leia quatro notas, calcule a média aritmética e imprima o resultado.

#include <stdio.h>

int main() {
    //declaração de variáveis
    float nota1, nota2, nota3, nota4, media;

    //entrada
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("informe a quarta nota: ");
    scanf("%f", &nota4);

    //processamento
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    //saída
    printf("A nota final é %.2f\n", media);

    return 0;
}