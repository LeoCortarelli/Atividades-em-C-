#include<stdio.h>

void imprime(int num){
	printf("%d", &num);
}

int leitura(){
	int numero;
	printf("Estamos imprimindo o numero: ");
	scanf("%d", &numero);
	return numero;
}

int main(){
	int a;
	printf("Ola essa e a função que le um numero e retorna. Digite um numero: \n");
	a = leitura();
	imprime(a);
}
