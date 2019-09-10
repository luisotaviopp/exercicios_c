#include <stdlib.h>
#include <stdio.h>

int main(void) {
    unsigned int inteiro = 128;
    printf("val = %d\n", inteiro);
    printf("bytes = %x\n\n", inteiro);
    
    char letra = 'a';
    printf("val = %c\n", letra);
    printf("bytes = %x\n\n", letra);
    
	int numeroPositivo = 422;
    printf("val = %d\n", numeroPositivo);
    printf("bytes = %x\n\n", numeroPositivo);

    int numeroNegativo = -422;
    printf("val = %d\n", numeroNegativo);
    printf("bytes = %x\n\n", numeroNegativo);

	float pontoFlutuante = 1.2e3;
    printf("val = %f\n", pontoFlutuante);
    printf("bytes = %x\n\n", pontoFlutuante);
    
	float pontoFlutuanteNegativo = -1.2e3;
	printf("val = %f\n", pontoFlutuanteNegativo);
    printf("bytes = %x\n\n", pontoFlutuanteNegativo);

	return 0;
}
