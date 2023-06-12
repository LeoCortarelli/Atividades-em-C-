// Faça um algoritmo que calcule quantas movimentações (apenas as mudanças de posição)
// que são realizadas na ordenação do Insertion Sort. Depois, imprima na tela a quantidade
// de movimentações e o vetor ordenado. A seguir tem uma imagem que ilustra a
// movimentação para você entender melhor o que é a “movimentação” no Insertion Sort. Na
// imagem, há três movimentações de cartas, ou seja, três mudanças de posição.
#include<stdio.h>

#define N 8


int main(){
	int vet[N];
	int i,j;
	int aux;
	int mov;
	
	printf("Insira os valores do vetor: ");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
	for(i = 1; i < N; i++){
		aux = vet[i];
		j = i - 1;
		while(j >= 0 && vet[j] > aux){
			vet[j+1] = vet[j];
			j = j - 1;
			mov = mov + 2;
		}
		vet[j+1] = aux;
		mov++;
	}
	
	printf("\n A quantidade de movimentacoes foi de: %d \n", mov);
	
	printf("\n Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d \n", vet[i]);
	}
	
	return 0;
}
