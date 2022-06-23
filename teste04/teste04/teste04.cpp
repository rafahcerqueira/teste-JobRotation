#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	printf("\n------------FATURAMENTO MENSAL------------\n\n");

	float total, sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;

	total = sp + rj + mg + es + outros;

	sp = (sp / total) * 100;
	rj = (rj / total) * 100;
	mg = (mg / total) * 100;
	es = (es / total) * 100;
	outros = (outros / total) * 100;

	printf("\t\t%.2f\n\n", total);

	printf("Faturamento em %% detalhado por estado:\n\n\n\tSP: %.2f%%\n\tRJ: %.2f%%\n\tMG: %.2f%%\n\tES: %.2f%%\n\tOutros: %.2f%%\n\n\n", sp, rj, mg, es, outros);

	system("PAUSE");
	return 0;
}