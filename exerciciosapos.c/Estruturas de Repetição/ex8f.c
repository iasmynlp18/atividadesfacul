/*

Elabore um programa que receba a idade, o peso, o sexo e o estado civil de várias 
pessoas e imprima a quantidade daquelas que são casadas, solteiras, separadas 
e viúvas. Apresente a média de idade e de peso. O algoritmo finaliza quando for 
informado o valor zero para idade.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, qtdIdades = 0, qtdPeso = 0, estadoCivil, casadas = 0, solteiras = 0, separadas = 0, viuvas = 0;
    float peso, mediaIdade = 0, mediaPeso = 0;
    char sexo;

    do {
    system("cls");
    printf("---- Descobrindo a quantidade de pessoas em cada estado civil e a media de idade e peso entre elas ----");
    printf("\n\nDigite a idade( OU 0 para ver os resultados ): ");
    scanf("%d", &idade);
    qtdIdades++;

    if (idade == 0) {
        system("cls");
        printf("\n ---- Resultados ----\n");
        printf("Casadas: %d\nSolteiras: %d\nViuvas: %d\nSeparadas: %d\n\n", casadas, solteiras, viuvas, separadas);
        printf("Media de idades: %.2f\nMedia pesos: %.2f\n\n", mediaIdade, mediaPeso);
        return 0;
    }

    printf("Digite o peso: ");
    getchar();
    scanf("%f", &peso);
    qtdPeso++;
    
    printf("Digite o sexo(F - Feminino ou M - Masculino): ");
    getchar();
    scanf("%c", &sexo);
    
    printf("\nDigite o Estado Civil\n1 - Casado\n2 - Solteiro\n3 - Viuvo\n4 - Separado\nEscolha: ");  
    scanf("%d", &estadoCivil);

    switch (estadoCivil)
    {
    case 1:
        casadas++;
        break;
    case 2: 
        solteiras++;
        break;
    case 3: 
        viuvas++;
        break;
    case 4:
        separadas++;
        break;
    default:
        printf("Opcao invalida");
        break;
    }
 
    mediaIdade = mediaIdade + idade;
    mediaIdade = mediaIdade / qtdIdades;

    mediaPeso = mediaPeso + peso;
    mediaPeso = mediaPeso / qtdPeso;
 
    } while(1);
}
