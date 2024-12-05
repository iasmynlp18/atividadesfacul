
/* Problema 1 pag37. 

Escreva um programa que leia um número inteiro e apresente seu antecessor 
e seu sucessor 

*/

#include <stdio.h>

int main() {
	int ant, suce, n1;

	printf("Digite um numero inteiro: ");
	scanf("%d", &n1);

	ant = n1 - 1;
	suce = n1 + 1; 

	printf("O antecessor de %d e: %d\nO sucessor de %d e: %d", n1, ant, n1, suce);
	return 0;
}
