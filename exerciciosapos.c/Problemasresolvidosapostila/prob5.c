/*
Problema 4 pag40

Elabore um programa que calcule a área de um trapézio

*/

#include <stdio.h>

int main() {
    float baseA, baseB, altura, area;

    printf("Informe a base menor do trapezio: ");
    scanf("%f", &baseA);

    printf("Informe a base maior: ");
    scanf("%f", &baseB);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    area = ((baseA + baseB) * altura) /2;

    printf("A area do trapezio e: %.2f", area);

    return 0;
}