/*

Faça um programa que leia números inteiros até que seja informado o valor 0. 
Apresente a média dos valores, o maior e o menor valor e a quantidade de números 
pares e ímpares.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float totalMedia = 0;
    int num = 0, maiorNum = 0, menorNum = 0, par = 0, impar = 0, totalNumeros = 0, somaMedia = 0;

    while(1) {
        printf("\nDigite numeros inteiros (Ou informe 0 para sair): ");
        scanf("%d", &num);
        totalNumeros++;
        
        somaMedia = somaMedia + num; 
        
        if (num % 2 == 0) {
            par++;
        }
        else {
            impar++;
        }

        if (num > maiorNum) {
            maiorNum = num;
        }            
        if (num < maiorNum) {
            menorNum = num;
        }
        if (num == 0) {
            totalMedia = (float)somaMedia / totalNumeros;
            
            printf("\n---- Resultados ----\n");
            printf("A media dos valores e de: %.1f\n", totalMedia);
            printf("O maior numero e: %d\n", maiorNum);
            printf("O menor numero e: %d\n", menorNum);
            printf("Pares: %d\nImpares: %d\n", par, impar);
        }
    }
    return 0; 
}
