#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	struct dadosAluno{
		char nome[12];
		int idade;
};

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	
	struct dadosAluno dados ;
	
	printf("Informe o nome do aluno: \n");
	gets(dados.nome);
	fflush(stdin);
	printf("Informe a idade nome do %dº aluno: \n");
	scanf("%d", &dados.idade);

	

	printf("Nome do aluno: %s \n", dados.nome);
	printf("Idade do aluno: %d \n", dados.idade);

return 0;
}



