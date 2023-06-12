// Fa�a um algoritmo que calcule quantas movimenta��es (apenas as mudan�as de posi��o)
// que s�o realizadas na ordena��o do Insertion Sort. Depois, imprima na tela a quantidade
// de movimenta��es e o vetor ordenado. A seguir tem uma imagem que ilustra a
// movimenta��o para voc� entender melhor o que � a �movimenta��o� no Insertion Sort. Na
// imagem, h� tr�s movimenta��es de cartas, ou seja, tr�s mudan�as de posi��o.
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
