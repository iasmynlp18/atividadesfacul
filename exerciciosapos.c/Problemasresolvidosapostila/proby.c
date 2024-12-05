/*

Verificar se uma pessoa é menor de idade, adulta ou idosa

*/ 

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Voce e menor de idade");
    }
    else if (idade >= 18 && idade <= 64) {
        printf("Voce e um adulto");
    }
    else {
        printf("Voce e um idoso");
    }

    return 0;
} 