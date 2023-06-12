// 01. Implemente o método do Insertion Sort utilizando uma função para ordenar. Passe o vetor
// inteiro para essa função.
#include<stdio.h>

#define N 8

void insertionSort(int vet[]){
	int i,j;
	int aux;
	
	for(i = 1; i < N; i++){
		aux = vet[i];
		j = i - 1;
		while(j >= 0 && vet[j] > aux){
			vet[j+1] = vet[j];
			j = j - 1;
		}
		vet[j+1] = aux;
	}
}

int main(){
	int vet[N];
	int i;
	
	printf("Insira os valores do vetor: ");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
	insertionSort(vet);
	
	
	printf("Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d \ns", vet[i]);
	}
	
	return 0;
}
