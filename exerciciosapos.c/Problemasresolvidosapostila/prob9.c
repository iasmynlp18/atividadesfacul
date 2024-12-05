/*
Problema 4 pag70

De acordo com uma tabela médica, o peso ideal está relacionado com a altura e 
o sexo. Elabore um algoritmo que receba altura e sexo de uma pessoa e calcule e 
imprima o seu peso ideal, sabendo que:
Para homens (72.7 x altura) - 58
Para mulheres (62.1 x altura) - 44.7

*/

#include <stdio.h>

float entradaalt() {
    float altura;
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    return altura;
}

char entradasexo() {
    char sexo;

    printf("Digite o seu sexo(F ou M): ");
    scanf("%c", &sexo);
    getchar();

}

int main() {
    float altura = entradaalt(), pIdeal;
    char sexo = entradasexo(); 

    if (sexo == 'f' || sexo == 'F') 
    {
        pIdeal = ((62.1 * altura) - 44.7);
        printf("Seu peso ideal e: %.2f", pIdeal);
    }
    else if (sexo == 'm' || sexo == 'M') 
    {
        pIdeal = ((72.7 * altura) - 58);
        printf("Seu peso ideal e: %.2f", pIdeal);

    }

    return 0;
}