#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, r, s, d;
    
	printf("Digite o primeiro valor a: ");
	scanf("%d", &a);

	printf("Digite o segundo valor b: ");
	scanf("%d", &b);

	printf("Digite o primeiro valor c: ");
	scanf("%d", &c);
	 	 
	r = ((a + b) * (a + b));
	s = ((b + c) * (b + c));
	d = (r + s) / 2;

    printf("O resultado da expressão é: %d\n", d);

	return 0;
}