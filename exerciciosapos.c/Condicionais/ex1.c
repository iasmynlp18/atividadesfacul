/*
Exercicio pag74

Escreva um programa que receba cinco números inteiros e apresente o maior e o menor.

*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;

    printf("Digite cinco numeros para saber qual o maior e o menor: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
    {
        printf("O numero %d e o maior\n", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
    {
        printf("O numero %d e o maior\n", num2);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
    {
        printf("O numero %d e o maior\n", num3);
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
    {
        printf("O numero %d e o maior\n", num4);
    }
    else
    {
        printf("O numero %d e o maior\n", num5);
    }

    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
    {
        printf("O numero %d e o menor\n", num1);
    }

    else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
    {
        printf("O numero %d e o menor\n", num2);
    }

    else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
    {
        printf("O numero %d e o menor\n", num3);
    }

    else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
    {
        printf("O numero %d e o menor\n", num4);
    }

    else
    {
        printf("O numero %d e o menor\n", num5);
    }

    return 0;
}
