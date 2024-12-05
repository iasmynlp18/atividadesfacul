/*
Problema 1 pag66 

Faça um programa que leia um número e informe se ele é divisível por cinco

*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero para ver se ele e divisivel por 5: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("O numero e divisivel por 5\n");
    }
    else 
    {
        printf("O numero NAO e divisivel por 5");
    }
    
    return 0;
}