#include <stdio.h>

int main () { 
    /* programa para verificar como o C "trunca" inteiros */
    printf ("O resultado inteiro de 9/4 e: %d", 9/4);
    printf ("\nO resultado inteiro de 17/3 e: %d\n", 17/3);
    printf ("O resultado real de 9/4 e: %.2f", (float)9/4);
    printf ("\nO resultado real de 17/3 e: %.2f\n", (float)17/3);

    /* 
    O resultado inteiro de 9/4 e: 2
    O resultado inteiro de 17/3 e: 5
    O resultado real de 9/4 e: 2.25
    O resultado real de 17/3 e: 5.67
    */

    return 0;
}