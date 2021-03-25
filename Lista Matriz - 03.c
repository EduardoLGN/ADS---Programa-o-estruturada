#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int i,j, contador;
int resultado[5];
char questoes[5][10];
char respostas[10];


int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
				do{
					printf("Informe a resposta do %dº aluno sobre a %dª pergunta: \n",i+1, j+1);
					scanf("%c",&questoes[i][j]);
					fflush(stdin);
					if(questoes[i][j]!='a' && questoes[i][j]!='b' && questoes[i][j]!='c' && questoes[i][j]!='d'){
						printf("Alternativa inválida, informe novamente. \n");
					}
				}while(questoes[i][j]!='a' && questoes[i][j]!='b' && questoes[i][j]!='c' && questoes[i][j]!='d');
		}
		system("cls");
	}
	
	for(i=0;i<10;i++){
		printf("Informe a resposta correta da %dª pergunta: \n", i+1);
		scanf("%c",&respostas[i]);
		fflush(stdin);
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			if(questoes[i][j]==respostas[j]){
				contador++;
			}
		}
		resultado[i]=contador;
		contador=0;
	}
	
	for(i=0;i<5;i++){
		printf("\n \n \n O número de acertos do %dº aluno foi de %d \n\n", i+1, resultado[i]);
	}
	

	
return 0;
}

