/*

Nada melhor do que uma máquina para realizar tarefas repetitivas, 
evitando esforço humano desnecessário. 
Assim sendo, elabore um programa que leia uma frase e o 
número de vezes que deseja imprimi-la.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[60];
    int nvezes;
    
    system("cls");
    printf("Digite uma frase: ");
    fgets(frase,sizeof(frase),stdin);
    frase[strcspn(frase,"\n")] = '\0';
   
    printf("Digite o numero de vezes que deseja que ela se repita: ");
    scanf("%d", &nvezes);

    system("cls");
    for (int i = 0; i < nvezes; i++) {
        printf("%s\n", frase);
    }

    return 0;
}
