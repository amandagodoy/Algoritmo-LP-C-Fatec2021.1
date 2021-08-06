/*
Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
seu objetivo.
*/
//ade = altura do degrau de uma escada
//auda = altura que o usuário deseja alcançar
//saso = subir para atingir seu objetivo 

#include <stdio.h>

int main() {
    //declaração de variáveis
    float ade, auda, saso;

    //entrada
    printf("Digite a altura do degrau da escada: ");
    scanf("%f", &ade);
    printf("Digite a altura a ser alcançada: ");
    scanf("%f", &auda);

    //processamento
    saso = auda / ade;

    //saida
    printf("O usuário vai precisar atingir %.2f com a altura digitada\n", saso);

    return 0;
}