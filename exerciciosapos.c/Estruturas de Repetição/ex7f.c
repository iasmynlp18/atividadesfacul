/*

Faça um programa que leia um conjunto de pedidos e calcule o total da compra.
O pedido possui os seguintes campos: número, data (dia, mês e ano), 
preço unitário e quantidade. 
A entrada de pedidos é encerrada quando o usuário informa zero 
como número do pedido

*/

#include <stdio.h>
#include <stdlib.h>
                      
int main() {
    int num = 0, dia, mes, ano, qtd = 0;
    float precouni = 0, totalCompra = 0; 

    while (1) {
        system("cls");
        printf("---- Descobrindo o total da compra de produtos ----\n");
        printf("\nDigite o numero do pedido: ");
        scanf("%d", &num);

        printf("Digite a data da compra(dia/mes/ano): ");
        scanf("%d/%d/%d", &dia, &mes, &ano);

        printf("Digite o preco unitario do produto: ");
        scanf("%f", &precouni);

        printf("Digite a quantidade de produtos: ");
        scanf("%d", &qtd);

        // calcula o pedido atual sempre, pra depois somar todos juntos
        float totalPedido = precouni * qtd;
        totalCompra = totalCompra + totalPedido;

        if (num == 0) {
            system("cls");
            printf("O total da compra foi de R$%.2f", totalCompra);
            return 0;
        }

    }
    
}
