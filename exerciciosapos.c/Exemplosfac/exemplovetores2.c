#include <stdio.h>

int main() {
    int idade;
    float altura, peso;
    char nome[50], telefone[15];

    printf("Insira seu nome: ");
    scanf("%s", &nome);
    getchar();

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("Insira sua altura: ");
    scanf("%f", &altura);

    printf("Insira seu peso: ");
    scanf("%f", &peso);
    getchar();

    printf("Insira seu telefone: ");
    scanf("%s", &telefone);
    getchar();

    printf("Seu nome é: %s\n", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Sua altura é: %.2f\n", altura);
    printf("Seu peso é: %.2f\n", peso);
    printf("Seu telefone é: %s\n", telefone);
    
    return 0; 
}