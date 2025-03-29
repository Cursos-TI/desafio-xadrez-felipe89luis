#include <stdio.h>

int main(){
	
	int i;
	printf("Movimento da torre:\n");
	for (i =0; i <5; i++){
	}
	printf("Direita\n");
	
	int j = 0;
	printf("\n Movimento do Bispo:\n");
	while (j <5){
	printf("Direita\n");
	j++;
	} 
	
	int k = 0;
	printf("\n Movimento da Rainha");
	do {
		printf("Esquerda\n");
		k++;
	} while (k < 8);
	return 0;
}
