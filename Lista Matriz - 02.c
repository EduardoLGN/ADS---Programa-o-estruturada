#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int i,j;
int matriz[4][4];


int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
				matriz[i][j]=rand()%20;
		}
	}

	printf("Matriz original: \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("[%d]",matriz[i][j]);
		}
		printf(" \n ");
	}
	
	printf(" \n Matriz triangular inferior: \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(j>i){
				matriz[i][j]=0;
			}
			printf("[%d]",matriz[i][j]);
		}
		printf(" \n ");
	}
	
	
return 0;
}
