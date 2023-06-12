// 05. Imagine que uma pessoa est� estudando algoritmos de Ordena��o. Ela quer calcular
// quantos passos o algoritmo Bubble Sort possui no pior e no melhor caso para ordenar um
// vetor de N posi��es (N � uma constante definida via #define). Pense em qual � o melhor
// caso de um algoritmo de ordena��o. Depois, pense em qual seria o pior caso para um
// algoritmo de ordena��o. Deste modo, calcule para essa pessoa a quantidade de passos
// que o m�todo Bubble Sort faz no melhor e no pior caso. Defina em c�digo um vetor para o
// melhor caso. Depois, defina um vetor para o pior caso. Depois, crie uma fun��o que
// ordene o vetor pelo m�todo Bubble Sort e retorne a quantidade total de passos realizados
// para ordenar o vetor.
// Como calcular os passos? A cada compara��o que for realizada (ex: vet[i] > vet[i+1]),
// some mais 1. A cada atribui��o que for realizada em uma troca, some + 1. Ao final, mostre o
// vetor do melhor caso ordenado e a quantidade de passos que ele executou (n�mero de
// compara��es e atribui��es). Tamb�m mostre o vetor do pior caso ordenado e a quantidade de
// passos que ele executou.
#include<stdio.h>

#define N 5

int ordenador(int vet[]){
	int aux;
	int i,j;
	int somatorio;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N-1; j++){
			somatorio++; // Contabiliza a melhor
			if(vet[j] > vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				somatorio = somatorio + 3; // contabiliza a pior
			}
		}
	}
	return somatorio;
}

int main(){
	int vetMelhorcaso[N] = {1,2,3,4,5};
	int vetPiorcaso[N] = {5,4,3,2,1};
	int somatorioMelhor, somatorioPior;
	int i;
	
	somatorioMelhor = ordenador(vetMelhorcaso);	
	
	printf("Vetor melhor caso ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d", vetMelhorcaso[i]);
	}
	printf("\n A quantidade de passos foi %d ", somatorioMelhor);
	
	
	
	
	printf("\n\n");
	
	
	
	
	somatorioPior = ordenador(vetPiorcaso);
	
	printf("Vetor pior caso ordenado \n");
	for(i = 0; i < N; i++){
		printf("%d", vetPiorcaso[i]);
	}
	printf("\n A quantidade de passos foi %d ", somatorioPior);
	
	return 0;
}
