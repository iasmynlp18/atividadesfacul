
/* Problema 2 pag39.

Faça um programa que receba o valor de um depósito e o valor da taxa de juros, 
calcule e apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento)

*/

#include <stdio.h>

int main() {
    float deposito, vtotal, rendimento, tempo, juros;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &juros);
    getchar();

    printf("Digite por quanto tempo o deposito ficara mantido em anos: ");
    scanf("%f", &tempo);

    rendimento = (deposito * tempo * juros) / 100 ;

    vtotal = deposito + rendimento;

    printf("\nO valor total foi: %.2f\n", vtotal);
    printf("O rendimento foi: %.2f", rendimento);

    return 0; 
}