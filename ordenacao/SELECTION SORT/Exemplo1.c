// Selection Sort
#include<stdio.h>
#define N 7

int main(){
	int vet[N] = {8,3,1,5,4,9,7};
	int i,j;
	int aux;
	int min;
	
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
		}
	}
	
	for(i = 0; i < N; i++){
		printf("%d \n", vet[i]);
	}
	return 0;
}
