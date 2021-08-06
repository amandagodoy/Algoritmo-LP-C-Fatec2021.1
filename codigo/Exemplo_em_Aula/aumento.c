#include <stdio.h>

#define AUMENTO 0.10

int main () { 
    float salario=1000, salario_novo;

    salario_novo = salario + AUMENTO*salario;

    return 0;
}