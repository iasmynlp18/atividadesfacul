/* 
Exercicio pag43

Escreva um programa que, dado o raio de um círculo, 
calcule sua área e o perímetro. A 
área é a superfície do objeto, dada por A = πt^2 , 
e o perímetro é a medida do contorno 
do objeto dado por P = 2πr^2 . 
Dica: utilize as funções intrínsecas vistas nesta unidade. 

*/

#include <stdio.h>
#include <math.h>

int main() {

#define pi 3.14

    // raio = distancia do meio do circulo até uma estremidade
    // diametro = 2 vezes o raio / distancia de uma estremidade a outra
    float raio, elevado, perimetro, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    elevado = pow(raio, 2);
    perimetro = 2 * (pi * raio);

    area = pi * elevado;

    printf("A area do circulo e de: %.2f\nO perimetro e de: %.2f", area, perimetro);

    return 0;
}