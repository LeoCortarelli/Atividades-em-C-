//algoritimo "comição"  comentario no codigo
#include<stdio.h> // Incluindo uma biblioteca

int main(){  // Abrindo a tag main aonde o codigo começa
	float b = 0; // Declarando uma variavel tipo float
	float result = 0; // Declarando outra variavel tipo float
	float pedaco = 0; // Declarando outra variavel tipo float
	
	while(b != -1){ // Começando o comando while que e um laco de repetição ( ENQUANTO B FOR DIFERENTE DE -1 EXECUTE O COMANDO)
		result = result+(b*0.03); // Result esta somando a porcentagem de B
		printf("Digite um novo valor: "); // Printando a informação na tela para o usuario
		scanf("%f", &b); // Esta lendo a informação para o usuario e colocando na variavel B
	} // Chaves fechando o comando while 
	
	if (b < 1302){  // Comando SE aonde ele faz com que Se a variavel B for menor que o numero execute oque esta dentro das chaves
		pedaco = result/1302.0; // A variavel pedaco esta recebendo a variavel result dividido pelo numero
		printf("Voce tem mais %f de salario, ou seja %f reais.", pedaco, result); // Emprimindo na tela o pedaco que e um salario e esta representado pelo primeiro %f e o segundo %f e o resultado da conta que foi feita aqui em cima
	}else if(result >= 1302){ // O else if e um senão entao se o B não for menor que o numero ele cai nesse else if aonde ele ve se o result e maior ou igual ao numero 1302
		printf("Mais um salario"); // Se o numero for maior ele emprime na tela oque esta dentro das aspas
	} // fechando o elseif
} // fechando o comando principal ou seja o main


// Oque está acontecendo 
// O programa esta fazendo o usuario digitar o salario que esta na variavel B e vai multiplicar a variavel b com 0.03 ate o usuario digitar -1
// ai o programa pega a variavel b se ela for menor que 1302 entao a variavel pedaco vai receber result dividido por 1302 e vai printar na tela o pedaco
// e o result assim o programa esta calculando a porcentagem dos salarios que vai ser aumentado se o salario for maior de 1302 ele so vai mostrar mais um salario.

