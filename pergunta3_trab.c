// Crie uma fun��o sem retorno que imprima uma das caracter�sticas da casa engra�ada.
// Caso o usu�rio digite 1, imprima a primeira estrofe. Caso o usu�rio digite 2, imprima a
// segunda estrofe, e assim por diante. O programa s� termina quando o usu�rio imprimir
// todas as estrofes, mas as estrofes podem ser impressas em ordem diferente da original.
// Segue as estrofes:
//Era uma casa
//Muito engra�ada
//N�o tinha teto
//N�o tinha nada

//Ningu�m podia
//Entrar nela, n�o
//Porque na casa
//N�o tinha ch�o

//Ningu�m podia
//Dormir na rede
//Porque na casa
//N�o tinha parede

//Ningu�m podia
//Fazer pipi
//Porque penico
//N�o tinha ali

//Mas era feita
//Com muito esmero
//Na Rua dos Bobos
//N�mero zero


#include<stdio.h>

void imprime(){
		int estrof1 = 0;
		int estrof2 = 0;
		int estrof3 = 0;
		int estrof4 = 0;
		int estrof5 = 0;
		int opcao = 0;
		
		printf("Digite um numero da estrofe 1,2,3,4,5: ");
		scanf("%d", &opcao);
		
		while(estrof1 == 0 || estrof2 == 0 || estrof3 == 0 || estrof4 == 0 || estrof5 == 0){
			if(opcao == 1){
				printf("Era uma casa\n Muito engra�ada\n N�o tinha teto\n N�o tinha nada");
				estrof1++;	
			}else if(opcao == 2){
				printf("Ningu�m podia\n Entrar nela, n�o\n Porque na casa\n N�o tinha ch�o");
				estrof2++;	
			}else if(opcao == 3){
				printf("Ningu�m podia\n Dormir na rede\n Porque na casa\n N�o tinha parede");
				estrof3++;
			}else if(opcao == 4){
				printf("Ningu�m podia\n Fazer pipi\n Porque penico\n N�o tinha ali");
				estrof4++;
			}else if(opcao == 5){
				printf("Mas era feita\n Com muito esmero\n Na Rua dos Bobos\n Numero zero");
				estrof5++;
			}else{
				printf("Codigo invalido !!");
			}
			
			if (estrof1 == 0 || estrof2 == 0 || estrof3 == 0 || estrof4 == 0 || estrof5 == 0){
				printf("\nDigite um numero da estrofe 1,2,3,4,5: ");
				scanf("%d", &opcao);	
			}	
		}
}

int main(){
	
	imprime();
		
	return 0;
}
