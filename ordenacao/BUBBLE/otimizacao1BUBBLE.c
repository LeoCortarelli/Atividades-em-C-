#include<stdio.h>
#define N 7
int main(){
	int i, j, vet[] = {1,2,3,4,5,6,7};
	int aux;
	int trocou = 1; // sempre começa com 1
	
	for(i = 0; i < N && trocou == 1; i++){
		trocou = 0; 
		printf("%d", i);
		for(j = 0; j < N-1; j++){
			if(vet[j] > N-1){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				trocou = 1; // quando troca alguma posição ele vai para 1
			}
		}
	}
}
