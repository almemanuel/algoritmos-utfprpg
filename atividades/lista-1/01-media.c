// RM 11:36

// Faça um programa que leia a média entre dois valores
#include <stdio.h>

// executará a média aritmética entre dois numeros
int main () {
	// declarações de variáveis
	float number1, number2, average;

	// entrada de number1
	printf("Digite o primeiro numero: ");
	scanf("%f", &number1);

	// entrada de number2
	printf("Digite o segundo numero: ");
	scanf("%f", &number2);

	// calculo e exibição da media
	average = (number1 + number2) / 2;
	printf("A media aritmetica entre os valores informados é %.2f", average);
}

// RM 11:36