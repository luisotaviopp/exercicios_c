#include <stdio.h>
#include <stdlib.h>

int main (void) {
	float np1, np2, media, soma_notas, media_turma;
	int alunos, total_alunos, aprovados, reprovados;
	
	printf("Quantos alunos: ");
	scanf("%d", &alunos);
	aprovados = 0;
	reprovados = 0;
	media_turma = 0;
	
	total_alunos = alunos;
	
	while(alunos > 0) {
		printf("\n\n<<< ALUNO %d >>>", alunos);
		
		printf("\n\nDigite a NP1: ");
		scanf("%f", &np1);
		
		printf("\nDigite a NP2: ");
		scanf("%f", &np2);
		
		media =(np1 + np2) / 2;
		if (media>=7) {
			printf("\n\nAluno %d esta aprovado.", alunos);
			aprovados++;
		} else {
			printf("\nAluno %d esta reprovado.", alunos);
			reprovados++;
		}
		soma_notas += media;
		alunos--;
	}
	
	media_turma = soma_notas/total_alunos;
	
	printf("\n\nFINAL: \n\n>>> %d alunos foram aprovados. \n>>> %d alunos foram reprovados.", aprovados, reprovados);	
	printf("\nA nota média da turma foi: %.2f", media_turma);
}
