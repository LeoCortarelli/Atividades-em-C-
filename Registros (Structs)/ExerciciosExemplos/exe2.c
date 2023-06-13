// 03) Num certo munic�pio, v�rios propriet�rios de im�veis
//  est�o em atraso com o pagamento do IPTU. Fa�a um
//  programa em C para ler os dados do im�vel e imprimir o
//  valor do IPTU com a multa a ser paga, considerando os
//  dados do im�vel: n�mero de cadastro, valor do imposto e
//  quantidade de meses em atraso. A multa � de R$ 50,00 por
//  m�s de atraso. Todas essas informa��es, inclusive a multa,
//  devem ser armazenadas em um registro.

#include<stdio.h>
#include<string.h>

typedef struct{
	int numCadastro;
	float valorImposto;
	int quantMesesAtraso;
	float multa;
}Imovel;

int main(){
	Imovel imo1;
	float totalImposto;
	
	printf("Digite numero de cadastro do imovel: \n");
	scanf("%d%*c", &imo1.numCadastro);
	
	fflush(stdin);	
	
	printf("Digite o valor do imposto: \n");
	scanf("%f", &imo1.valorImposto);
	
	fflush(stdin);
	
	printf("Digite a quantidade de meses atrazados: \n");
	scanf("%d", &imo1.quantMesesAtraso);
	
	fflush(stdin);
	
	if(imo1.quantMesesAtraso != 0){
		imo1.multa = 50.00;
		totalImposto = imo1.multa * imo1.quantMesesAtraso;
		printf("O total do seu IPTU e: %f", totalImposto);
	}else{
		printf("O total do seu IPTU e: %f", imo1.valorImposto);
	}
	return 0;
}
