#include<stdio.h>
#define N 7
int main(){
	int i, j, vet[] = {1,2,3,4,5,6,7};
	int aux;
	int trocou = 1;
	
	for(i = 0; i < N && trocou == 1; i++){
		trocou = 0; 
		printf("%d", i);
		for(j = 0; j < N-1-i; j++){ // Criterio de que não vai comparar a ultima posição que e maior
			if(vet[j] > N-1){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				trocou = 1;
			}
		}
	}
}
