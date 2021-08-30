#include <stdio.h>
#include <stdlib.h>

void main()
{
    // DEFINE VARIÁVEIS E UM VETOR
    int numero, x, y, z, cont = 0;
    char strX[] = "xxxxxxxxxxxxxxxxxxxx";

    // LÊ UM VALOR
    printf("\nDigite um numero de 2 a 20: ");
    scanf("%d", &numero);

    // GERA AS SEQUÊNCIAS
    for (x = numero; x > 0; x--)
    {
        // AUMENTA A QUANTIDADE DE "X" NA SEQUÊNCIA
        for (z = 0; z < cont; z++)
        {
            printf("%c", strX[z]);
        }

        // VARIÁVEL DE CONTROLE DA SEQUÊNCIA DE "X" 
        cont++;

        // DIMINUI A QUANTIDADE DE NÚMEROS NA SEQUÊNCIA
        for (y = 1; y <= x; y++)
        {
            printf("%d", y);
        }
        printf("\n");
    }
    system("pause");
}