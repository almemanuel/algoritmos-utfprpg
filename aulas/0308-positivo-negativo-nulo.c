// RM 11:36

/*
Faça um algoritmo que verifique se um número é positivo, negativo ou nulo.
*/

#include<stdio.h>

int main() {
	// float, pois o programa não especifica. Portanto, existe a possibilidade do usuário digitar um valor Real
	float number;
	
	// entrada de dados
	printf("Digite um número: ");
	scanf("%f", &number);

	// processamento de dados e saída através de condicionais
	if (number > 0) {
		printf("%.2f é positivo", number);
	}
	if (number == 0) {
		printf("%.2f é nulo", number);
	}
	if (number < 0) {
		printf("%.2f é negativo", number);
	}
}

// RM 11:36
