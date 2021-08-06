#include <stdio.h>
#include <math.h>

int main () {
    //declaração de váriaveis
    float d, x1, y1, x2, y2;
    //entrada de dados
    printf("Digite as coordenadas do ponto P1: \n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    printf("Digite as coordenadas do ponto P2: \n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);
    //processamento
    d = sqrt ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    //saída
    printf("A distancia entre P1 e P2 e %f\n", d);

    return 0;
}