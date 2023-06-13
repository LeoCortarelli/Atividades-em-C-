// EXEMPLO REGISTRO
#include<stdio.h>
#include<string.h>
typedef struct{
	int cod;
	char nome[10];
	float media;
}Aluno;

int main(){
	Aluno joao;
	joao.cod = 123;
	joao.media = 7.5;
	strcpy(joao.nome, "Joao");
	
	printf("cod: %d \n", joao.cod);
	printf("media: %f \n", joao.media);
	printf("nome: %s \n", joao.nome);
	
	
	// Inserindo as informaçoes do teclado
	scanf("%d*c", &joao.cod);
	fgets(joao.nome, 10, stdin);
	fflush(stdin);
	scanf("%f", &joao.media);
	
	printf("cod: %d \n", joao.cod);
	printf("media: %f \n", joao.media);
	printf("nome: %s \n", joao.nome);
}
