#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	struct dadosBrutos{
		char nome[12];
		char endereco[30];
		char telefone[12];
	};
	
	struct dadosBrutos dados[3];
	
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("Informe o nome do %dº aluno: \n", i+1);
		gets(dados[i].nome);
		fflush(stdin);
		printf("Informe o endereço do %dº aluno: \n",i+1);
		gets(dados[i].endereco);
		fflush(stdin);
		printf("Informe o telefone do %dº aluno: \n",i+1);
		gets(dados[i].telefone);
	}

	for(i=0;i<3;i++){
		printf("Nome do %dº aluno: %s \n", i+1, dados[i].nome);
		printf("Endereço do %dº aluno: %s \n",i+1, dados[i].endereco);
		printf("Telefone do %dº aluno: %s \n",i+1, dados[i].telefone);
	}

return 0;
}



