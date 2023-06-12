// 06. Ordenação inflacionada. Crie um algoritmo para ler um vetor de N posições (N definido via
// #define). Faça a ordenação desse algoritmo pelo método bolha inflacionado. Como ocorre
// o método inflacionado? Da seguinte maneira: a cada troca que for feita, aumente o número
// do menor valor em +0.1. Entretanto, esse aumento não pode ser maior que o valor trocado.
// Esse aumento também não pode ultrapassar o valor do próximo número à direita do maior,
// caso esse próximo seja maior que o maior. Imprima o valor resultante na tela e imprima
// também quanto foi a inflação acumulada no vetor (ou seja, quantos valores foram
// somados).
#include<stdio.h>

#define N 5

int main(){
	int vet[N] = {2,6,4,9,1,};
	int i,j;
	float aux;
	float inflacao;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N-1; j++){
			if(vet[j] > vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
			
			if(vet[j] + 0.1 < vet[j+1]){
				vet[j] = vet[j] + 0.1;
				inflacao = inflacao + 0.1;
			}else if(vet[j] + 0.1 < vet[j+2]){
				vet[j] = vet[j] + 0.1;
				inflacao = inflacao + 0.1;
			}else{
				vet[j] = vet[j+1];
				inflacao = inflacao + 0.1;
			}
		}
	}
	
	printf("Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d", vet[i]);
	}
	
	printf("\n\n");
	
	printf("A inflacao acumulada e: %f", inflacao);
}
