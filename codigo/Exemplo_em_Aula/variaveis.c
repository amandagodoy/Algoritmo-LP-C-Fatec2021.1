#include <stdio.h>

int main () { 
    float total_compra;
    int idade;
    char opcao;
    char nome[40];

    printf ("tamanho do inteiro: %ld bytes\n", sizeof(int));
    printf ("tamanho do float: %ld bytes\n", sizeof(float));
    printf ("tamanho do char: %ld bytes\n", sizeof(char));
    printf ("tamanho do nome: %ld bytes\n", sizeof(nome));
    return 0;
}