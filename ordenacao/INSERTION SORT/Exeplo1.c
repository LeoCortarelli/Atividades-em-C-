// EXEMPLO INSERTION SORT
#include<stdio.h>
#define N 7



int main(){
	int vet[N] = {6,3,8,1,4,9,5};
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
	
	printf("Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d \n", vet[i]);
	}
}
