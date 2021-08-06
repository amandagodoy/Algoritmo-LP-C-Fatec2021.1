//ler dois numeros, somá-los e exibir o resultado
#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração de variáveis
    float num1, num2, resultado;
    //entrada de dados
    printf("Vou somar dois numeros!\n");
    printf("Digite dois numeros:\n");
    scanf("%f%f", &num1, &num2);
    //processamento
    resultado = num1 + num2;
    //saida
    system("clear");
    printf("\nSoma é igual %.3f\n", resultado);
    system("pause");

    return 0;
}