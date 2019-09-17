//Faça um programa em C que leia do teclado seu peso na Terra e o número de um planeta, e mostre na tela qual é o seu peso neste planeta.

#include <stdio.h>

int main(void) {
	int cod_planeta;
	float peso;
	printf("\n");
	printf("Número		Planeta		Multiplicador	\n");
	printf("1		Mercurio	0,37		\n");
        printf("2               Vênus	        0,88            \n");
        printf("3               Marte	        0,38            \n");
        printf("4               Júpiter	        2.64            \n");
	
	printf("\nEscolha o planeta: ");
	scanf("%d", &cod_planeta);

	printf("\nQual o seu peso? ");
	scanf("%f", &peso);

	switch(cod_planeta) {
		case 1:
			printf("\nSeu peso em Mercúrio é %.2fKg.", peso*0.37);
		break;
		case 2:
			printf("\nSeu peso em Vênus é %.2fKg.", peso*0.88);
		break;
		case 3:
			printf("\nSeu peso em Marte é %.2fKg.", peso*0.38);
		break;
		case 4:
			printf("\nSeu peso em Júpiter é %.2fKg.", peso*2.64);
		break;
		default:
			printf("\nPlaneta não encontrado neste sistema.");
	}
	return 0;
}

