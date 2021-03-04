// RM 11:36
/*
Faça um programa que leia:
- o número do funcionário;
- o número de horas trabalhadas mensais;
- o valor que recebe por hora;
- o número de filhos com idade menor de 14 anos
Calcular  escrever o salário deste funcionário, sendo que cada filho menor de 14 anos acrescenta 10% do salário.
*/
#include <stdio.h>

int main () {
	// numeroFuncionario, horasTrabalhadasMensais só podem ser valores inteiros, porém os salários, como são monetários, e filhosAbaixoQuatorze, que será utilizado em divisão, devem pertencer ao conjunto dos Reais.
	int numeroFuncionario, horasTrabalhadas;
	float salarioHora, salarioFinal, filhosAbaixoQuatorze;
	
	// entrada de dados
	printf("Numero de funcionario: ");
	scanf("%i", &numeroFuncionario);
	printf("Horas trabalhadas mensais: ");
	scanf("%i", &horasTrabalhadas);
	printf("Salario por hora: R$ ");
	scanf("%f", &salarioHora);
	printf("Quantidade de filhos abaixo de 14 anos: ");
	scanf("%f", &filhosAbaixoQuatorze);

	// calculo do salario. obs: aumento de 10% = 110% do valor original, sem aumento = 100% do valor original
	salarioFinal = (horasTrabalhadas * salarioHora) * (1 + filhosAbaixoQuatorze/10);

	// saída de dados
	printf("O salario final do funcionario %i é R$ %.2f", numeroFuncionario, salarioFinal);
}

// RM 11:36
