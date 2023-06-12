// 04. Faça um algoritmo que ordene um vetor de N posições (N definido via #define) pelo
// método da Seleção (Selection Sort) e imprima os dois valores que serão trocados na tela,
// assim como calcular e imprimir a média simples dos valores que foram trocados no vetor.
#include<stdio.h>
#define N 7
int main(){
	int vet[N];
	int j, i;
	int aux;
	int min;
	int troca1 = 0;
	int troca2 = 0;
	int soma = 0;
	float media = 0;
	
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
			troca1 = vet[i];
			troca2 = vet[min];
			aux = vet[i];
			vet[i] = vet[min];
			vet[min] = aux;
			
			printf("\n");
			printf("Os valores trocados %d e %d", troca1, troca2);
			
			soma = soma + (troca1 + troca2);
		}
	}
	media = soma / N;
	
	printf("\n");
	printf("Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d", vet[i]);
	}
	
	
	printf("\n");
	printf("A media simples da troca de valores do vetor e: %f", media);
}











