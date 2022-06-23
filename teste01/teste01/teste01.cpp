#include <stdio.h>
#include <stdlib.h>

int main() {

	int indice = 13, soma = 0, k = 0;

	while (k < indice) {
		k = k + 1;
		soma = soma + k;
	}

	printf("\n\n%d\n\n\n", soma);

	system("PAUSE");
	return 0;
}