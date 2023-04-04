// Escreva uma fun��o que receba um valor de "salario", de uma "d�vida fixa" e duas vari�veis
// "lazer" e "d�vida antiga". Sua fun��o deve retornar as vari�veis os valores de "d�vida antiga"
// atualizada e de "lazer" que o usu�rio pode gastar no m�s de acordo com o sal�rio recebido.
// Considere que ele deve tentar pagar ao menos 30% das d�vidas antigas (caso o sal�rio d�
// conta), tentar pagar 90% das d�vidas atuais e utilizar ao menos 10% do sal�rio em lazer. A
// cada m�s, as d�vidas antigas aumentam em 5%. Caso n�o d� para pagar todas as contas,
// as d�vidas mensais devem ser acrescentadas �s d�vidas antigas depois de ter sido
// calculada a nova d�vida antiga. O valor de lazer sempre deve ser respeitado. Os valores de
// sal�rio, da d�vida mensal e da d�vida antiga s�o lidos no main(). Os valores de d�vida antiga
// e lazer devem ser modificados por refer�ncia.


#include<stdio.h>

float leiaSalario(){
	float salario;
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
	return salario;
}
float leiaDivida(){
	float divida;
	printf("Digite o valor de sua divida fixa: ");
	scanf("%f", divida);
	return divida;
}
float pagarDivida(float salario, float divida){
	float salarioF;
	float dividaF;
	float discontado;
	float aumentoDivida;
	float pagar90divida;
	salarioF = salario;
	dividaF = divida;
	if (dividaF > salarioF){
		discontado = salario * 0.3;
		dividaF = dividaF - discontado;
		aumentoDivida = dividaF * 0.05;
		dividaF = aumentoDivida;
	}else{
		pagar90divida = dividaF * 0.9;
		dividaF = salarioF - pagar90divida;
		aumentoDivida = dividaF * 0.05;
		dividaF = aumentoDivida;
	}
	return dividaF;
}
float salarioRetiradoLazer(float salario){ // FUN��O QUE RETORNA O SALARIO JA RETIRADO O VALOR DO LAZER
	float salarioF;
	float descontoLazer;
	salarioF = salario;
	
	descontoLazer = salarioF * 0.1;
	salarioF = salarioF - descontoLazer;
	
	return salarioF;
}

int main(){
	float salario;
	float divida;
	float lazer;
	int contMes;
	
	salario = leiaSalario();
	divida = leiaDivida();
	
	while(divida <= 0){
		salario = salarioRetiradoLazer(salario);
		divida = pagarDivida(salario, divida);
		
		salario = leiaSalario();
		contMes++;
	}
	
	printf("Voce pagou suas dividas em %d meses", contMes);
	
	
}


