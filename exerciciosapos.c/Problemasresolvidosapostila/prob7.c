/*
Problema 2 pag67

Elabore um programa que receba o nome e a idade de uma pessoa e informe 
o nome, a idade e o valor da mensalidade do plano de saúde. A tabela a seguir 
apresenta os valores de mensalidade:
Até 18 anos R$ 50,00
De 19 a 29 anos R$ 70,00
De 30 a 45 anos R$ 90,00
De 46 a 65 anos R$ 130,00
Acima de 65 anos R$ 170,00

*/

#include <stdio.h>
#include <string.h>

void entradanome(char nome[]) { 

    printf("Digite seu nome: ");
    getchar();
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
}

int entradaidade() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    return idade;
}

int main() {
    char nome[20];
    entradanome(nome);
    int idade = entradaidade();
    

    if (idade <= 18) 
    {
        printf("\nSeu nome e: %s\nSua idade e: %d\nSua mensalidade: R$50,00\n", nome, idade);
    }
    else if (idade >= 19 && idade <= 29)
    {
        printf("\nSeu nome e: %s\nSua idade e: %d\nSua mensalidade: R$70,00\n", nome, idade);
    }
    else if (idade >= 30 && idade <= 45) 
    {
        printf("\nSeu nome e: %s\nSua idade e: %d\nSua mensalidade: R$90,00\n", nome, idade);
    }
    else if (idade >= 46 && idade <= 65) 
    {
        printf("\nSeu nome e: %s\nSua idade e: %d\nSua mensalidade: R$130,00\n", nome, idade);
    } 
    else if (idade > 65)
    {
        printf("\nSeu nome e: %s\nSua idade e: %d\nSua mensalidade: R$170,00\n", nome, idade);
    }

    return 0;
}