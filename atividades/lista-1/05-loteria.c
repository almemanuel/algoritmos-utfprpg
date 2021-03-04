// RM 11:36
/*
Dois amigos jogam na loteria toda semana. Escreva um programa que:
- solicite a quantia com que cada um participou
- o valor do prêmio a ser rateado em partes diretamente proporcionais às quantias de cada um deles.
O programa deve imprimir quanto cada um dos amigos receberá caso sejam ganhadores
*/

#include <stdio.h>

int main() {
	float apostaPrimeiro, apostaSegundo, apostaTotal, premioTotal, premioPrimeiro, premioSegundo;
	
	// entrada de dados:
	printf("Valor apostado pelo primeiro amigo: R$ ");
	scanf("%f", &apostaPrimeiro);
	printf("Valor apostado pelo segundo amigo: R$ ");
	scanf("%f", &apostaSegundo);
	printf("Valor do premio: R$ "); 
	scanf("%f", &premioTotal);

	// apostaTotal ajudará a encontrar a porcentagem correspondente a cada um
	apostaTotal = apostaPrimeiro + apostaSegundo;
	// com a Regra de Três é possível dividir o prêmio proporcionalmente
	premioPrimeiro = (apostaPrimeiro * premioTotal) / apostaTotal;
	premioSegundo = (apostaSegundo * premioTotal) / apostaTotal;

	// saída de dados
	printf("Caso ganhem na loteria, o primeiro amigo receberá R$ %.2f, e o segundo, R$ %.2f", premioPrimeiro, premioSegundo);
}
// RM 11:36
