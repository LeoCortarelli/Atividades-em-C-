// Crie um vetor com a quantidade de Letras do alfabeto. Cada letra ocupa uma posição do
// vetor, começando com a letra A na posição 0 do vetor, e a letra Z sendo a última posição
// do vetor. Com esse vetor de caracteres, crie um algoritmo inspirado no método Bubble
// Sort para ordenar os caracteres de um nome de uma pessoa (considere que o nome não
// possui acento, símbolos ou caracteres especiais).
// Exemplo: "Joao"
// Saída: "aJoo"
#include<stdio.h>
#define N 26

int main(){
	char nome[N];
	int i,j;
	int aux;
	int tamanhoNome;
	
	printf("Digite o nome (EM LETRAS MINUSCULAS): ");
	scanf("%s", nome);
	
	tamanhoNome = strlen(nome);
	
	for(i = 0; i < tamanhoNome - 1; i++){
		for(j = 0; j < tamanhoNome-i-1; j++){
			if(nome[j] > nome[j+1]){
				aux = nome[j];
				nome[j] = nome[j+1];
				nome[j+1] = aux; 
			}
		}
	}
	
	printf("%s", nome);
	
		
}
