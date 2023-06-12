// 03. Implemente o método do Bubble Sort com a segunda otimização em uma função, da
// maneira que está descrita no slide da aula 10.
#include<stdio.h>
#define N 7
void ordena(int vet[N]){
	for(i = 0; i < N && trocou == 1; i++){
		trocou = 0; 
		printf("%d", i);
		for(j = 0; j < N-1-i; j++){ 
			if(vet[j] > N-1){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				trocou = 1;
			}
		}
	}
}

int main(){
	int vet[N] = {1,2,4,6,8,4};
	int i;
	
	ordena(vet);
	
	for(i = 0; i < N; i++){
		printf("%d \n", vet[i]);
	}
}
