#include<stdio.h>
#define N 10

void quick_sort(int vet[],int inicio,int fim){
	int pivo;
	if(fim > inicio){
		pivo = particiona(vet,inicio,fim);
			quick_sort(vet,inicio,pivo-1);
			quick_sort(vet,pivo+1,fim);
		}
	}

int particiona(int vet[],int inicio,int fim){
	int esq, dir, aux, pivo;
	esq = inicio;
	dir = fim;
	pivo = vet[inicio];
	
	while(esq < dir){
		while(esq <= fim && vet[esq] <= pivo){
			esq++;
		}
		while(dir >= 0 && vet[dir] > pivo){
			dir--;
		}
		if(esq < dir){
			aux = vet[esq];
			vet[esq] = vet[dir];
			vet[dir] = aux;
		}
	}
	vet[inicio] = vet[dir];
	vet[dir] = pivo;
	return dir;
}


int main(){
	int vet[N] = {3,5,6,9,1,25,14,78,54,12};
	int i = 0;
	
	
	quick_sort(vet,vet[0],vet[N-1]);
	
	for(i = 0; i < N; i++){
		printf("%d", vet[i]);
	}
	
		
}
