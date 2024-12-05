/*

Imagine que você esteja ensinando a tabuada para uma criança e precisa mostrar 
a ela todas as possíveis multiplicações entre os números que vão de um até dez. 
Assim, elabore um programa que imprima a tabuada do um ao dez

*/

#include <stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, (i * j));
            
        }
        printf("\n-------------\n\n");
    }

    return 0;
}
