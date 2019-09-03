// 4. Faça um programa que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.

#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int dias, qt_anos, resto_anos, qt_meses, resto_meses, qt_dias, resto_dias, resultado;

	printf("Quantos dias? ");
	scanf("%d", &dias);

	qt_anos = dias /365;
	resto_anos = dias % 365;
	qt_meses = resto_anos / 30;
	resto_meses = resto_anos % 30;
	resto_dias = resto_meses;

	printf("%d anos, %d meses, %d dias", qt_anos, qt_meses, resto_dias);
	return 0;
}
