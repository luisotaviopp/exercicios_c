// Um vendedor necessita de um programa de um programa para auxiliá-lo a calcular o valor devido pelo cliente no momento do pagamento. O programa deve receber como entrada o código de um produto e a quantidade comprada, para imprimir na tela o preço total.

#include <stdio.h>

int main(void){
	printf("\n<<< PRODUTOS >>> \n");
	printf("Código		Valor	\n");
	printf("7654		R$3,22	\n");
	printf("1235		R$8,85	\n");
	printf("9378		R$1,36	\n");
	printf("8764		R$3,42	\n");
	printf("6727		R$7,48	\n");
	
	int cod_produto, quantidade;
	float valor_final;

	printf("Qual o produto que você deseja comprar? ");
	scanf("%d", &cod_produto);

	printf("Quantos deseja comprar? ");
	scanf("%d", &quantidade);

	switch(cod_produto) {
		case 7654:
			printf("Valor final: R$%.2f", quantidade * 3.22);
		break;
		case 1235:
			printf("Valor final: R$%.2f", quantidade * 8.85);
		break;
		case 9378:
			printf("Valor final: R$%.2f", quantidade * 1.36);
		break;
		case 8764:
			printf("Valor final: R$%.2f", quantidade * 3.42);
		break;
		case 6727:
			printf("Valor final: R$%.2f", quantidade * 7.48);
		break;
		default:
			printf("Produto não encontrado.");
	}
	return 0;
}
