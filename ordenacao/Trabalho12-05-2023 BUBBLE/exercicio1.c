// 01. Implemente o m�todo do Bubble Sort utilizando uma fun��o para ordenar. Passe o vetor
// inteiro para essa fun��o. N�o utilize nenhuma varia��o do m�todo, apenas o estilo de
// Bubble Sort que est� apresentado no slide da aula (dois for, com troca).
#include<stdio.h>
#define N 7

void ordena(int vet[N]){
	int i,j;
	int aux;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N-1; j++){
			if(vet[j] > vet[j +1]){
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
}

int main(){
	int vet[N] = {1,2,4,6,8,4};
	int i;
	
	ordena(vet);
	
	for(i = 0; i < N; i++){
		printf("%d \n", vet[i]);
	}
}
