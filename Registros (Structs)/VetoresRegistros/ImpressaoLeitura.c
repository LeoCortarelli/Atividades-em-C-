// 01) Crie um vetor (de 3 posi��es) de um registro que
// armazene: i) o c�digo de um produto, ii) o nome de um
// produto, iii) a quantidade de produtos no estoque.
// Crie no main uma repeti��o para permitir o usu�rio ler a
// informa��o dos tr�s produtos.
// Mostre na tela todas as informa��es, separadas por
// produto.
#include<stdio.h>
#include<string.h>

#define N 3

typedef struct{
	int codigo;
	char nome[10];
	int quant;
}Produto;

int main(){
	Produto carros[N];
	int i;
	
	for(i = 0; i < N; i++){
		printf("Digite o codigo do carro : ");
		scanf("%d%*c", &carros[i].codigo);
		printf("\n");
		printf("Digite o nome do carro : ");
		fgets(carros[i].nome, 10, stdin);
		printf("\n");
		printf("Digite a quantidades de carros : ");
		scanf("%d", &carros[i].quant);
		printf("\n\n");
	}
	
	printf("\n IMPREMINDO OS CARROS \n");
	printf("\n");
	for(i = 0; i < N; i++){
		printf("Codigo do carro: %d \n", carros[i].codigo);
		printf("Nome do carro: %s \n", carros[i].nome);
		printf("Quantdade de carros: %d \n", carros[i].quant);
		printf("\n ------------------- \n");
	}
	
	return 0;
	
	
	
}
