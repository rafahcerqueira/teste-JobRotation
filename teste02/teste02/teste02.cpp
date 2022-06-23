#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <math.h>

//sequência fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34....

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	int i = 0, numeroInformado, fib[8], num1 = 1, num2 = 1;

	printf("Digite um número inteiro de 0 à 100: ");
	scanf_s("%d", &numeroInformado);

	printf("\n%d", i);
	printf("\n%d", num1);
	printf("\n%d", num2);

	for (i = 0; i <= numeroInformado; i++) {

		fib[i] = num1 + num2;
		num2 = num1;
		num1 = fib[i];

		printf("\n%d", fib[i]);
	}

	printf("\n\n");

	if (numeroInformado == fib[0] || numeroInformado == fib[1] || numeroInformado == fib[2] || numeroInformado == fib[3] || numeroInformado == fib[4] || numeroInformado == fib[5] || numeroInformado == fib[6] || numeroInformado == fib[7] || numeroInformado == 0 || numeroInformado == 1) {

		printf("\nO número informado percente a sequência de Fibonacci!\n\n\n");
	}
	else if (numeroInformado != fib[0] || numeroInformado != fib[1] || numeroInformado != fib[2] || numeroInformado != fib[3] || numeroInformado != fib[4] || numeroInformado != fib[5] || numeroInformado != fib[6] || numeroInformado != fib[7] || numeroInformado != 0 || numeroInformado != 1) {

		printf("\nO número informado não percente a sequência de Fibonacci!\n\n\n");
	}

	system("PAUSE");
	return 0;
}