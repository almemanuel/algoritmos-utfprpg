// RM 11:36

/*
Escreva um programa que leia do teclado um valor N, em segundos, e converta- o para horas, minutos e segundos.
O resultado deve ser escrito na tela, conforme o exemplo:
1- Exemplo de entrada: 7322
2- Saída correspondente: 7322 segundos sao 2 horas, 2 minutos e 2 segundos
*/

#include <stdio.h>

int main() {
	// como usará todas as medidas de tempo, o conjunto N deve ser o suficiente
	int segundosPreConversao, horas, minutos, segundosPosConversao;
	
	// entrada de dados
	printf("Digite a quantidade de segundos: ");
	scanf("%i", &segundosPreConversao);

	// processamento
	/* cada unidade de tempo possui valor maximo de 60. Logo:
	   1 hora = 60 minutos = 3600 segundos
	   Portanto, basta:
           - converter para horas
           - utilizar o resto para converter os minutos
           - o resto de tudo, serão os segundos que fecharão a conta*/
	horas = segundosPreConversao / 3600;
	minutos = (segundosPreConversao % 3600) / 60;
	segundosPosConversao = (segundosPreConversao % 3600) % 60;

	// saída de dados
	printf("%i segundos sao %i horas, %i minutos e %i segundos", segundosPreConversao, horas, minutos, segundosPosConversao);	
}	

// RM 11:36
