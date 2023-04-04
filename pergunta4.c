// Escreva uma função que receba um valor de "salario", de uma "dívida fixa" e duas variáveis
// "lazer" e "dívida antiga". Sua função deve retornar as variáveis os valores de "dívida antiga"
// atualizada e de "lazer" que o usuário pode gastar no mês de acordo com o salário recebido.
// Considere que ele deve tentar pagar ao menos 30% das dívidas antigas (caso o salário dê
// conta), tentar pagar 90% das dívidas atuais e utilizar ao menos 10% do salário em lazer. A
// cada mês, as dívidas antigas aumentam em 5%. Caso não dê para pagar todas as contas,
// as dívidas mensais devem ser acrescentadas às dívidas antigas depois de ter sido
// calculada a nova dívida antiga. O valor de lazer sempre deve ser respeitado. Os valores de
// salário, da dívida mensal e da dívida antiga são lidos no main(). Os valores de dívida antiga
// e lazer devem ser modificados por referência.


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
float salarioRetiradoLazer(float salario){ // FUNÇÃO QUE RETORNA O SALARIO JA RETIRADO O VALOR DO LAZER
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


