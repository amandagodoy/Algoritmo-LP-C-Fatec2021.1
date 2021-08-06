/* Ler a altura e o raio de um cilindro circular e imprimir o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio^2 ∗ altura, 
onde π = 3.141592. */

#include <stdio.h>
//números magicos
//nomear a constante PI 
//#define PI 3.141592

int main() {
    //declaração de variáveis
    float r, a,v;
    //entrada
    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    printf("Digite o valor da altura: ");
    scanf("%f", &a);
    //processamento
    //v = PI * (r * r) * a;
    v = 3.141592 * (r * r)  * a;
    //saída
    printf("O volume do cilindro é igual a %.2f\n", v);

    return 0;
}