//1. Construa um programa que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    float x1, y1, x2, y2;
    float resultado;
 
 	printf("---- PRIMEIRO VETOR ---- \n");

	printf("\n Digite o valor X do primeiro vetor: ");
	scanf("%f", &x1);
	
	printf("\n Digite o valor Y do primeiro vetor: ");
	scanf("%f", &y1);
	
	printf("\n \n ---- SEGUNDO VETOR ---- \n");

	printf("\n Digite o valor X do segundo vetor: ");
	scanf("%f", &x2);
	
	printf("\n Digite o valor Y do segundo vetor: ");
	scanf("%f", &y2);
	
	resultado = sqrt( pow((x2-x1),2) + pow((y2-y1),2));
	
	printf("\n A distancia entre os pontos eh: %.2f", resultado);

	return 0;
}
