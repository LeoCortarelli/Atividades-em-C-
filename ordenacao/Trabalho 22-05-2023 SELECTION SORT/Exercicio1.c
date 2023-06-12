// 01. Implemente o m�todo da Sele��o (Selection Sort) utilizando uma fun��o para ordenar.
// Passe o vetor inteiro para essa fun��o.

#include<stdio.h>
#define N 7


int main(){
	int vet[N];
	int j, i;
	int aux;
	int min;
	
	printf("Digite 7 valores no vetor: ");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
	// ordena��o 
	for(i = 0; i < N-1; i++){
		min = i;
		for(j = i+1; j < N; j++){
			if(vet[min] > vet[j]){
				min = j;
			}
		}
		if(i != min){
			aux = vet[i];
			vet[i] = vet[min];
			vet[min] = aux;
		}
	}
	
	printf("Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d", vet[i]);
	}
	return 0;		
}
