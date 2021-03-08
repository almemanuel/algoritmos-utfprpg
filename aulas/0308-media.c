// RM 11:36
/*
Faça um algoritmo que, dada duas notas, calcule a média de um aluno.
Informe se ele está “Aprovado” ou “Reprovado”.
*/

#include <stdio.h>

int main() {
	// variáveis utilizadas na entrada de dados	
	float note1, note2;

	// entrada de dados
	printf("Digite a primeira nota: ");
	scanf("%f", &note1);
	printf("Digite a segunda nota: ");
	scanf("%f", &note2);

	// calculo da media
	float average = (note1 + note2) / 2;

	// saida de dados, considerando 5 a nota mínima para aprovação
	if (average >= 5) {
		printf("Aprovado");
	}
	if (average < 5) {
		printf("Reprovado");
	}
}

// RM 11:36
