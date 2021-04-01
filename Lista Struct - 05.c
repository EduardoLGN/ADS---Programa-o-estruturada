#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct vetor{
	int a;
	int b;
	int c;

};

	
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, soma;
	struct vetor vetor[3];
	
	for(i=0;i<2;i++){
		vetor[i].a=rand()%100; 
		vetor[i].b=rand()%100;
		vetor[i].c=rand()%100;
	}
	
	for(i=0;i<2;i++){
		printf("\n\n\n Dados do vetor %d \n", i+1);
		printf("A=%d - B=%d - C=%d \n",vetor[i].a, vetor[i].b, vetor[i].c);
	}
	
	vetor[2].a= vetor[0].a + vetor[1].a;
	vetor[2].b= vetor[0].b + vetor[1].b;
	vetor[2].c= vetor[0].c + vetor[1].c;
	
	printf("\n Soma dos vetores \n");
	printf("A=%d - B=%d - C=%d \n",vetor[2].a, vetor[2].b, vetor[2].c);
	
	
return 0;
}



