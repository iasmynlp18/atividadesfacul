/*

É muito comum que programas tenham de implementar funcionalidades
para identificar características específicas e
realizar operações sobre um conjunto de dados.
Dessa forma, faça um programa que apresenta a soma de todos os números inteiros
ímpares entre 200 e 500

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;

    for (int i = 200; i <= 500; i++)
    {
        if (i % 2 == 1)
        {
            soma = soma + i;
        }
    } 
    system("cls");
    printf("A soma dos impares entre 200 e 500 e de: %d\n", soma);

    return 0;
}
