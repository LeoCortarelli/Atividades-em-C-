// 02. Faça um algoritmo que imprima na tela quantas trocas foram feitas na ordenação pelo
// método do Insertion Sort.
#include<stdio.h>

#define N 8


int main(){
	int vet[N];
	int i,j;
	int aux;
	int trocas;
	
	printf("Insira os valores do vetor: ");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
	for(i = 1; i < N; i++){
		aux = vet[i];
		j = i - 1;
		while(j >= 0 && vet[j] > aux){
			vet[j+1] = vet[j];
			j = j - 1;
			trocas++;
		}
		vet[j+1] = aux;
	}
	
	printf("\n A quantidade de trocas foi de: %d \n", trocas);
	
	printf("\n Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d \n", vet[i]);
	}
	
	return 0;
}
