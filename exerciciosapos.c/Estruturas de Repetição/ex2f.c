/*

Para os seres humanos, trabalhar com séries numéricas sem o auxílio de 
ferramentas computacionais pode ser um grande transtorno. 
Assim sendo, construa um programa que leia o número de termos da série 
e imprima o valor de S. 

S = 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/N

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vfinal;
    const int fixo = 1;
    float soma = 0;

    system("cls");
    printf("---- Descobrindo o valor da soma de todos os termos(S) de uma serie de numeros ----\n");
    printf("\nDigite o valor final de termos da serie de numeros: ");
    scanf("%d", &vfinal);

    for (int j = 1; j <= vfinal; j++) {
        soma = soma + (float)fixo / j;
    }

    system("cls");
    printf("A soma de termos(S) equivale a: %.4f\n\n", soma);

    return 0;
}
