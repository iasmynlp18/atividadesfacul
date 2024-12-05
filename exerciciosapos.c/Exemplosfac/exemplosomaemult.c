#include <stdio.h>

int main() {
    int v1, v2, reslt;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &v1);

    printf("Escreva outro numero inteiro: ");
    scanf("%d", &v2);
    
    if (v1 == v2)
    {
        reslt = v1 * v2;
        printf("A multiplicacao entre %d e %d resulta em %d", v1, v2, reslt);
    }
    else 
    {
        reslt = v1 + v2;
        printf("A soma entre %d e %d resulta em %d", v1, v2, reslt);
    }

    return 0;
}