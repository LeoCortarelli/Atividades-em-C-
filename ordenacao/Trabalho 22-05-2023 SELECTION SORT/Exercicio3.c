// 03. Fa�a um algoritmo que calcule a m�dia dos valores presentes em um vetor. Depois,
// ordene o vetor pelo m�todo da Sele��o (Selection Sort), sendo que nesta ordena��o,
// imprima se a troca do menor valor foi maior ou menor que a m�dia que voc� calculou.
// Imprima na tela quantos n�meros que foram trocados na ordena��o eram menores que a
// m�dia e quantos eram maiores que a m�dia.
#include<stdio.h>
#define N 7
int main(){
	int vet[N];
	int j, i;
	int aux;
	int min;
	int soma = 0;
	float media = 0.0;
	int maior = 0;
	int menor = 0;
	
	printf("Digite 7 valores no vetor: ");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < N; i++){
		soma = soma + vet[i];
	}
	
	media = soma / N;
	
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
	
	printf("Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d", vet[i]);
		
		
		if(vet[i] < media){
			menor++;
		}else if(vet[i] > media){
			maior++;
		}
	}
	
	printf("\n");
	printf("As trocas do maior valor s�o: %d \n", maior);
	printf("As trocas do menor valor s�o: %d", maior);
	
	return 0;
	
	
}
