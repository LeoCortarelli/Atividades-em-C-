// 04. Faça um algoritmo para ordenar um vetor de 5 posições informado pelo usuário usando o
// algoritmo de ordenação Bubble Sort (bolha). Nas trocas que o bolha faz, imprima "troca de
// pares" caso a troca envolva dois pares, e "troca de ímpares" caso os dois números forem
// ímpares ao mesmo tempo. Caso eles forem pares e ímpares, não imprima nada.

#include<stdio.h>

#define N 5

int main(){
	int vet[N];
	int i,j;
	int aux;
	int pares = 0;
	int impares = 0;
	
	printf("Insira os valores do vetor \n");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N-1; j++){
			if(vet[j] > vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				
				if(vet[j] % 2 == 0 && vet[j+1] % 2 == 0){
					printf("%d e %d sao pares \n", vet[j], vet[j+1]);
				}else if(vet[j] % 2 != 0 && vet[j+1] % 2 != 0){
					printf("%d e %d sao impares \n", vet[j], vet[j+1]);
				}
			}
		}
	}
	
	for(i = 0; i < N; i++){
		printf("%d", vet[i]);
	}
}
