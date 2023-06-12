#include<stdio.h>

#define N 4

int main(){
	int i,j;
	int vet[N];
	int aux;
	
	printf("Insira os valores do vetor: ");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
	printf("\n Print des \n");
	for(i = 0; i < N; i++){
		printf("%d ", vet[i]);
	}
	
	
	// Ordenação
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N-1; j++){
			if(vet[j] > vet[j +1]){
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
	
	
	printf("\n Ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d \n", vet[i]);
	}
}
