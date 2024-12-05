/*

Faça um programa que leia um número e informe 
se ele é divisível por três e por sete.

*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero para saber se ele e divisivel por 3 e 7: ");
    scanf("%d", &num);

    // Se a mod b = 0, quer dizer que a é divisível por b, pois não há nenhum resto na divisão. 
    //Caso contrário, se o resultado do módulo não for zero, então a não é divisível por b.
    if (num % 3 == 0 && num % 7 == 0) {
        printf("%d e divisivel por 3 e 7", num);
    }
    else {
        printf("%d NAO e divisivel por 3 e 7", num);
    }

    return 0;
}
