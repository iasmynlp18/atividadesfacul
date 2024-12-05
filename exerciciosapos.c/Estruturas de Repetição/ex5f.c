/*

Para poder classificar um conjunto de dados, é comum que programadores 
utilizem estruturas de decisão associadas a estruturas de repetição. 
Assim sendo, construa um programa que apresente todos os números
divisíveis por três e por sete que sejam menores que 30

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 1; i < 30; i++) {
         
        if (i % 3 == 0 && i % 7 == 0) {
           system("cls");
           printf("%d\n", i);
        } 
    }

    return 0;
}
