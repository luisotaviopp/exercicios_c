// 2. Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 

#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int anos, meses, dias, resultado;
	
	printf("Quantos anos? ");
	scanf("%d", &anos);

	printf("\nQuantos meses? ");
	scanf("%d", &meses);

	printf("\nQuantos dias? ");
	scanf("%d", &dias);
	
	resultado = (anos * 365) + (meses * 30) + dias;

	printf("\n%d dias", resultado);
}
