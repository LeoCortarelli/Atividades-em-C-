// Questão 2
// Crie um programa para armazenar um No composto do ID e de uma nota de 5 alunos em uma lista .Faça o usuario digitar
// as notas dos alunos e faça a incerção dos alunos da lista de acordo com a função de inserção de sua preferencia .AO
// final, imprima a lista na tela, mostrando se cada aluno está aprovado (nota >= 7), Reprovado (nota < 3) ou Exame(nota entre 3 e 9,9). Por fim 
// conte e imprima na tela quantos dos 5 alunos estão reprovados.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	int id;
	float nota;
	struct No *prox;	
}No;

typedef struct{
	No *inicio;
}Lista;

void inserir_inicio(Lista *lista, int id, float nota){
	No *novo = (No *) malloc(sizeof(No));
	novo->id = id;
	novo->nota = nota;
	if(lista->inicio == NULL){
		lista->inicio = novo;
		novo->prox = NULL;
	}else{
		novo->prox = lista->inicio;
		lista->inicio = novo;
	}
}


int main(){
	Lista alunos;
	alunos.inicio = NULL;
	int i;
	int id_aux;
	float nota;
	int contReprovado = 0;
	
	while(i < 5){
		printf("Digite o ID do aluno: \n");
		scanf("%d%*c", &id_aux);
		fflush(stdin);
		printf("Digite a nota do aluno: \n");
		scanf("%f%*c", &nota);
		
		inserir_inicio(&alunos, id_aux, nota);
		
		
		i++;
	}
	
	No *p;
	for(p = alunos.inicio; p != NULL; p = p->prox){
		if(p->nota <= 3){
			printf("O aluno ID: %d esta REPROVADO \n", p->id);
			contReprovado++;
		}else if(p->nota > 3 && p->nota <= 6.9){
			printf("O aluno ID: %d esta EM EXAME \n", p->id);
		}else{
			printf("O aluno ID: %d esta APROVADO \n", p->id);
		}
	}
	
	printf("A quantidade de alunos reprovados e: %d", contReprovado);
	
	return 0;
}
