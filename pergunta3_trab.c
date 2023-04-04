// Crie uma função sem retorno que imprima uma das características da casa engraçada.
// Caso o usuário digite 1, imprima a primeira estrofe. Caso o usuário digite 2, imprima a
// segunda estrofe, e assim por diante. O programa só termina quando o usuário imprimir
// todas as estrofes, mas as estrofes podem ser impressas em ordem diferente da original.
// Segue as estrofes:
//Era uma casa
//Muito engraçada
//Não tinha teto
//Não tinha nada

//Ninguém podia
//Entrar nela, não
//Porque na casa
//Não tinha chão

//Ninguém podia
//Dormir na rede
//Porque na casa
//Não tinha parede

//Ninguém podia
//Fazer pipi
//Porque penico
//Não tinha ali

//Mas era feita
//Com muito esmero
//Na Rua dos Bobos
//Número zero


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
				printf("Era uma casa\n Muito engraçada\n Não tinha teto\n Não tinha nada");
				estrof1++;	
			}else if(opcao == 2){
				printf("Ninguém podia\n Entrar nela, não\n Porque na casa\n Não tinha chão");
				estrof2++;	
			}else if(opcao == 3){
				printf("Ninguém podia\n Dormir na rede\n Porque na casa\n Não tinha parede");
				estrof3++;
			}else if(opcao == 4){
				printf("Ninguém podia\n Fazer pipi\n Porque penico\n Não tinha ali");
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
