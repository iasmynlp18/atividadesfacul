/*

Identifique os erros sintático e semânticos no programa a seguir, cujo objetivo é ler
dois números e apresentar a soma entre os dois.

*/

#include <stdio.h>
int main()
{
    int num1, num2, total;

    printf("\nDigite o primeiro numero: ");

    scanf("%d", &num1); // & faltando
    printf("\nDigite o segundo numero: ");

    scanf("%d", &num2);

    total = num1 + num2; // ; faltando

    printf("\n A soma dos numeros é : %d ", total); // variavel passada errada, era soma ao inves do total
    
    return 0;
}