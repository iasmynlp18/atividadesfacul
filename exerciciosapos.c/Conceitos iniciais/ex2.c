
/* 

Escreva um programa que leia nome, idade e altura de uma pessoa e exiba nome, 
idade, altura e ano de nascimento dela  

*/

#include <stdio.h>

int main() {
	char nome[30];
	int idade, anoAtual = 2024;
	float altura;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	getchar();
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	int anoNasc = anoAtual - idade;
	
	printf("Seu nome e: %s\n", nome);
	printf("Sua idade e: %d\n", idade);
	printf("Sua altura e: %.2f\n", altura);
	printf("Voce nasceu no ano de: %d", anoNasc);
	
	return 0;
}
