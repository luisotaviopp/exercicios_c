#include <stdio.h>
#include <stdlib.h>

int main(void) { 
	float peso;
	int planeta;
	
	printf("Qual o seu peso? ");
	scanf("%f", &peso);
	
	printf("\n1. Mercurio. \n2. Venus. \n3. Marte. \n4. Jupiter. \nSelecione o planeta: ");
	scanf("%d", &planeta);
	
	switch(planeta) {
		case 1:
			printf("\nSeu peso em mercurio é: %.2f", peso * 0.37);
		break;
		case 2:
			printf("\nSeu peso em venus é: %.2f", peso * 0.88);
		break;
		case 3:
			printf("\nSeu peso em marte é: %.2f", peso * 0.38);
		break;
		case 4:
			printf("\nSeu peso em jupiter é: %.2f", peso * 2.64);
		break;
		default:
			printf("\nPlaneta inválido.");			
	}
}
