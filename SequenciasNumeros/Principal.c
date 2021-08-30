#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    // DEFINE VARIÁVEIS
    int numero, x, y;

    // LÊ UM VALOR
    printf("\nDigite um numero de 2 a 20: ");
    scanf("%d", &numero);

    // GERA AS SEQUÊNCIAS DE NÚMEROS
    // AUMENTA A QUANTIDADE DE NÚMEROS NA SEQUÊNCIA
    for (x = 1; x <= numero; x++)
    {
        for (y = 1; y <= x; y++)
        {
            printf("%d", y);
        }
        printf("\n");
    }

    // DIMINUI A QUANTIDADE DE NÚMEROS NA SEQUÊNCIA
    for (x -= 2; x > 0; x--)
    {
        for (y = 1; y <= x; y++)
        {
            printf("%d", y);
        }
        printf("\n");
    }
    system("pause");
}