/*

Elabore um programa que receba o salário de um funcionário e o código do 
cargo e apresente o cargo, o valor do aumento e o novo salário. A tabela a 
seguir apresenta os cargos. 

Código        Cargo               Percentual do aumento
  1          Servente                     40%
  2          Pedreiro                     35%
  3        Mestre de obras                20%
  4      Técnico de segurança             10%

*/

#include <stdio.h>

int main() {
    int codigo;
    float salario, nvsalario, aumento;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("\nDigite\n1. Servente\n2. Pedreiro\n3. Mestre de obras\n4. Tecnico de segurança\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("--- Servente ---");
        
        aumento = salario * 40/100;
        nvsalario = salario + aumento;

        printf("\nAumento: %.2f\n", aumento);
        printf("Seu novo salario e: %.2f", nvsalario);

        break;
    case 2:
        printf("--- Pedreiro ---");
        
        aumento = salario * 35/100;
        nvsalario = salario + aumento;

        printf("\nAumento: %.2f\n", aumento);
        printf("Seu novo salario e: %.2f", nvsalario);
        break;
    case 3:
        printf("--- Mestre de obras ---");
        
        aumento = salario * 20/100;
        nvsalario = salario + aumento;

        printf("\nAumento: %.2f\n", aumento);
        printf("Seu novo salario e: %.2f", nvsalario);
        break;
    case 4:
        printf("--- Tecnico de seguranca ---");
 
        aumento = salario * 10/100;
        nvsalario = salario + aumento;

        printf("\nAumento: %.2f\n", aumento);
        printf("Seu novo salario e: %.2f", nvsalario);
        break;
    default:
        printf("Numero invalido");
        break;
    }
    return 0;
}
