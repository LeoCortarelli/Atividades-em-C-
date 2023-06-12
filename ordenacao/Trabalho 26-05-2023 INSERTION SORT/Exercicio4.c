// 04. Crie uma função que checa se um vetor está ordenado utilizando o método Bolha. Se o
// vetor estiver ordenado, retorne 1. Se o vetor não estiver ordenado, retorne 0.
#include<stdio.h>
#define N 8

int ordena(int vet[]){
	int i,j;
	int aux;
	int trocou = 1;
		
	for(i = 0; i < N && trocou == 1; i++){
		trocou = 1; 
		printf("%d", i);
		for(j = 0; j < N-1; j++){
			if(vet[j] > N-1){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				trocou = 0;
			}
		}
	}
	return trocou;	
}

int main(){
	int vet[N];
	int i,j;
	int aux;
	int retorno;
	
	printf("Insira os valores do vetor: \n");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
	retorno = ordena(vet);
	
	printf("\n Retorno = %d \n", retorno);
	
	
	printf("\n Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d \n", vet[i]);
	}
	
	return 0;
}
