#include <stdio.h>

// executará a média aritmética entre dois numeros
int main () {
	// declarações de variáveis
	float num1, num2, media;

	// entrada de num1 
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	
	// entrada de num2
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);

	// calculo e exibição da media
	media = (num1 + num2) / 2;
	printf("A media aritmetica entre os valores informados é %.2f", media);
}
