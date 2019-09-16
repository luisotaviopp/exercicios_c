#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char nome[50];
	char sexo;
	int idade;

	printf("\nQual o seu nome? ");
	scanf("%[^\n]s", nome);								//Usa a regex para identificar os espaços na string.
	
	printf("\nOla, %s, voce eh homem ou mulher? (h/m) ", nome);
	scanf(" %c", &sexo);								// Usa o espaço antes do %c para limpar a memória antes de ler o caracter
	
	printf("\nQual o sua idade? ");
	scanf("%d", &idade);
	
	switch(sexo) {
		case 'h':
		case 'H':
			printf("\n %s eh homem e tem %d anos. ", nome, idade);
		break;

		case 'm':
		case 'M':
			printf("\n %s eh mulher e tem %d anos. ", nome, idade);
		break;
				
		default:
			printf("\nDeu ruim. v: %c", sexo);
	}
	
	return 0;
}
