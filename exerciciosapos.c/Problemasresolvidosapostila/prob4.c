/* Problema 3 pag39.

Escreva um programa que receba dois números, calcule e apresente o resultado 
do primeiro número elevado ao segundo.

*/

#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2, result;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    result = pow(n1, n2);

    printf("%.2f ^ %.2f = %.2f", n1, n2, result);
    
    return 0;
}
