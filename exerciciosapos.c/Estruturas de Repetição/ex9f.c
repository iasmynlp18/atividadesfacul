/*

Construa um programa que possibilite calcular a área total de uma residência 
(sala, cozinha, banheiro, quartos etc.). 
O programa deve solicitar a entrada do nome, a largura e o 
comprimento de determinado cômodo até que o nome do cômodo seja 
“FIM”. O programa deve apresentar o valor total acumulado da área residencial

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
                      
int main() {
    char nome[30], fim[4] = "FIM";
    float largura = 0, comprimento = 0, valorTotal = 0;
    int resultcomp;

    while (1) {

        system("cls");
        printf("\n---- Descobrindo a area total de uma residencia ----\n");
        printf("\nDigite o nome do comodo(Ou digite FIM para sair): ");
        getchar();
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        
        // strmp compara duas strings e retorna 0 se forem iguais, 1 o contrário
        resultcomp = strcmp(nome, fim);
        if (resultcomp == 0) {
            system("cls");
            printf("Valor total da area residencial: %.2fm4\n\n", valorTotal);
            return 0;
        }
        
        printf("Digite a largura do comodo: ");
        scanf("%f", &largura);
        getchar();

        printf("Digite o comprimento do comodo: ");
        scanf("%f", &comprimento);
        
        // a cada novo comodo o valorTotal recebe ele mesmo mais as novas informações de larg e compri
        valorTotal = valorTotal + largura + comprimento;
        
    }
}
