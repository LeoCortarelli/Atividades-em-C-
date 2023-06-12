// 02. Faça um algoritmo que imprima na tela quantas trocas foram feitas na ordenação pelo
// método da Seleção.
#include<stdio.h>
#define N 7

int main(){
	int vet[N];
	int j, i;
	int aux;
	int min;
	int cont = 0;
	
	printf("Digite 7 valores no vetor: ");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
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
			cont++;
		}
	}
	
	printf("O numero de trocas foi de %d \n", cont);
	
	printf("Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d", vet[i]);
	}
	return 0;
}
