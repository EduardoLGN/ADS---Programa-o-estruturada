#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int matriz[5][5][5];
int i,j,k;

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	


	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			for(k=0;k<5;k++){
				matriz[i][j][k]=rand()%100;
			}	
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			for(k=0;k<5;k++){
				printf("[%d]",matriz[i][j][k]);
			}
			printf("\n");	
		}
		printf("\n");
	}

	
return 0;
}

