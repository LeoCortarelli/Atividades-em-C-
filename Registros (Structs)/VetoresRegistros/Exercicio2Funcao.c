// 02) Crie um vetor (com 3 posições) de Registro para
// armazenar o nome de um aluno, sua primeira, segunda e
// terceira nota, e sua média final.
// Crie uma função para ler o registro por referência, lendo o
// nome e as três notas.
// Crie outra função para preencher a nota do aluno no vetor
// com a média final.
// Crie outra função para imprimir o vetor de registros.
// Faça o main apropriadamente.
#include<stdio.h>
#include<string.h>

#define N 3

typedef struct{
	char nome[10];
	float nota1;
	float nota2;
	float nota3;
	float media;
}Aluno;

void ler(Aluno *a){
	int i;
	for(i = 0; i < N; i++){
		printf("Digite o nome do aluno: ");
		fgets(a[i].nome, 10, stdin);
		printf("\n");
		printf("Digite a primeira nota : ");
		scanf("%f", a[i].nota1);
		printf("\n");
		printf("Digite a segunda nota : ");
		scanf("%f", a[i].nota2);
		printf("\n");
		printf("Digite a terceira nota : ");
		scanf("%f", a[i].nota3);
		printf("\n\n");
	}
}


void imprimir(Aluno al[N]){
	int i;
	for(i = 0; i < N; i++){
		printf("Nome do aluno: %s", al[i].nome);
		printf("Nota 1: %f \n", al[i].nota1);
		printf("Nota 2: %f \n", al[i].nota2);
		printf("Nota 3: %f \n", al[i].nota3);
		printf("Media: %f \n", al[i].media);
		printf("\n ------------ \n");
	}
}

void oiamedia(Aluno *a){
	int i;
	for(i = 0; i < N; i++){
		a[i].media = (a[i].nota1 + a[i].nota2 + a[i].nota3) / 3; 
	}
}

int main(){
	Aluno alunos[N];
	
	ler(alunos);
	printf("\n");
	oiamedia(alunos); 
	printf("\n");
	imprimir(alunos);	
} 
