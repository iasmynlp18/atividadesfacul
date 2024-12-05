#include <stdio.h>

int main() {
    char nome[15];

    printf("Digite seu nome: ");
    scanf("%s", &nome); 

    printf("Bem vindo a disciplina de Algoritmos e Logica de Programação II, %s", nome);

    return 0;
}
