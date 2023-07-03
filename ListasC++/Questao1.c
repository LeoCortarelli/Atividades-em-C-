// Questão 1
// Faca a lista se comportar de acordo com a imagem a seguir . Ou seja implemente as funções de inserção e remoção
// em listas e chame as funções na ordem que a figura indica . Faça a impressão da lista final apos todas as funçõe serem chamadas.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	int valor;
	struct No *prox;	
}No;

typedef struct{
	No *inicio;
}Lista;

void inserir_inicio(Lista *lista, int valor){
	No *novo = (No *) malloc(sizeof(No));
	novo->valor = valor;
	if(lista->inicio == NULL){
		lista->inicio = novo;
		novo->prox = NULL;
	}else{
		novo->prox = lista->inicio;
		lista->inicio = novo;
	}
}

void remover_inicio(Lista *lista){
	No *p = lista->inicio;
	if(lista->inicio == NULL){
		printf("Lista vazia!..");
	}else{
		lista->inicio = p->prox;
		free(p);
	}
}

void inserir_final(Lista *lista, int valor){
	No *novo = (No*) malloc(sizeof(No));
	novo->valor = valor;
	novo->prox = NULL;
	
	if(lista->inicio == NULL){
		lista->inicio = novo;
	}else{
		No *percorrer = lista->inicio;
		while(percorrer->prox != NULL){
			percorrer = percorrer->prox;
		}
		if(percorrer->prox == NULL){
			percorrer->prox = novo;	
		}
	}
}

void remover_final(Lista *lista){
	No *ultimo, *anterior;
	
	if(lista->inicio == NULL){
		printf("LISTA VAZIA");
	}else{
		ultimo = lista->inicio;
		if(lista->inicio->prox == NULL){
			lista->inicio = NULL;
			free(ultimo);
		}else{
			while(ultimo->prox != NULL){
				anterior = ultimo;
				ultimo = ultimo->prox;
			}	
		}
		anterior->prox = NULL;
		free(ultimo);
	}
}

int main(){
	Lista lista;
	lista.inicio = NULL;
	
	inserir_inicio(&lista, 34);
	remover_inicio(&lista);
	inserir_final(&lista, 56);
	inserir_inicio(&lista, 6);
	inserir_inicio(&lista, 38);
	remover_final(&lista);
	
	No *p;
	for(p = lista.inicio; p != NULL; p = p->prox){
		printf("Valores Lista: %d \n", p->valor);
	}
}
