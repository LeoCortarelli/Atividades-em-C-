// 08. Ordena��o pela Lei de Newton. Imagine que voc� est� armazenando n�meros
// energizados. Os valores armazenados s�o referentes a uma quantidade de energia. Toda
// vez que voc� faz uma troca, ambos os valores s�o reduzidos em -0.1, porque perdem
// energia. Deste modo, crie um algoritmo de ordena��o que troca os elementos fazendo a
// perda de energia (ou seja, de valor). Utilize while() para garantir que o vetor est�
// totalmente ordenado antes de sair da repeti��o. Imprima o vetor final na tela e a
// quantidade de energia que foi perdida para ordenar esse vetor.
#include<stdio.h>
#define N 5

int main(){
	double num[N];
	int i,j;
	int aux;
	double energia = 0.0;
	double energiaPerdida = 0.0;
	int trocou = 1;
	
	printf("Digite um valor da energia: \n");
	for(i = 0; i < N; i++){
		scanf("%lf", &num[i]);
	}
	
	

		for(i = 0; i < N && trocou == 1; i++){
			trocou = 0;
			for(j = 0; j < N-1; j++){
				if(num[j] > num[j+1]){
					aux = num[j];
					num[j] = num[j+1];
					num[j+1] = aux;
				
					num[j] = num[j] - 0.1;
					energiaPerdida = energiaPerdida - 0.1;
					num[j+1] = num[j+1] - 0.1;
					energiaPerdida = energiaPerdida - 0.1;
					trocou = 1;
				}
			}
		}
	
	
	printf("Vetor ordenado \n");
	for(i = 0; i < N; i++){
		printf("%lf \n", num[i]);
	}
	
	printf("\n O total de energia perdida foi de %lf ", energiaPerdida);

	
}
