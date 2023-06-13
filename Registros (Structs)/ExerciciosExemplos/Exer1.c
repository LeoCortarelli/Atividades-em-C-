// 02) Crie um registro que armazene: i) o código de um
//  produto, ii) o nome de um produto, iii) a quantidade de
//  produtos no estoque. Crie no main uma instância do
//  registro para dois produtos que o usuário queira cadastrar.
//  Mostre na tela todas as informações, separadas por
//  produto.
#include<stdio.h>
#include<string.h>
typedef struct{
	int cod;
	char nome[10];
	int quant;
}Produto; 


int main(){
	Produto prod1;
	
	printf("Digite o codigo do produto 1: \n");
	scanf("%d%*c", &prod1.cod);
	
	fflush(stdin);
	
	printf("Digite o nome do produto 1: \n");
	fgets(prod1.nome, 10, stdin);
	
	fflush(stdin);
	
	printf("Digite a quantidade do produto 1: \n");
	scanf("%d", &prod1.quant);
	
	printf("\n ----------------------------- \n");
	
	Produto prod2;
	
	printf("Digite o codigo do produto 2: \n");
	scanf("%d%*c", &prod2.cod);
	
	fflush(stdin);
	
	printf("Digite o nome do produto 2: \n");
	fgets(prod2.nome, 10, stdin);
	
	fflush(stdin);
	
	printf("Digite a quantidade do produto 2: \n");
	scanf("%d", &prod2.quant);
	
	fflush(stdin);
	
	printf("\n ----------------------------- \n");
	
	fflush(stdin);
	printf("Produto 1: \n");
	printf("Codigo: %d \n", prod1.cod);
	printf("Nome: %s \n", prod1.nome);
	printf("Quantidade: %d \n", prod1.quant);
	
	
	printf("\n ----------------------------- \n");
	
	printf("Produto 2: \n");
	printf("Codigo: %d \n", prod2.cod);
	printf("Nome: %s \n", prod2.nome);
	printf("Quantidade: %d \n", prod2.quant);
	
	return 0;
}
