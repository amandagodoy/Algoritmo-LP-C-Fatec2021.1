#include <stdio.h>

int main() {
    float x;

    printf("Digiteum valor entre 100 e 200: ");
    scanf("%f", &x);

    if(x >= 100 && x <= 200) {
        printf("Valor está no intervalo\n");
    } else {
        printf("Valor não está no intervalo\n");
    }
    return 0;
}