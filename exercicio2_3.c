#include <stdlib.h>
#include <stdio.h>

int main (void) {
        float salario, conta1, conta2, multa1, multa2, salario_final;
        printf("\nCalcula Multa");

        printf("\nInsira o valor do salário: ");
        scanf("%f", &salario);

        printf("\nQual o valor da primeira conta? ");
        scanf("%f", &conta1);

        printf("\nQual o valor da segunda conta? ");
        scanf("%f", &conta2);

        //imprime os valores
        multa1 = conta1 * 0.02;
        multa2 = conta2 * 0.02;

        printf("\n -- Valor do salário: %.2f", salario);

        printf("\n -- Valor da primeira conta: %.2f", conta1);
        printf("\n -- Valor da primeira multa: %.2f", multa1);

        printf("\n -- Valor da segunda conta: %.2f", conta2);
        printf("\n -- Valor da segunda multa: %.2f", multa2);

        salario_final = salario - conta1 - conta2 - multa1 - multa2;
        printf("\n -- Salário final: %.2f \n\n", salario_final);

        return 0;
}
