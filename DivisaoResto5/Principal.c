#include <stdio.h>
#include <stdlib.h>

void main()
{
    // DEFINE VARIÁVEIS
    int i, limite = 1999;

    for (i = 1000; i <= limite; i++)
    {
        // IDENTIFICA OS VALORES QUE SÃO DIVIDIDOS POR 11 TEM O RESULTADO DO RESTO IGUAL A 5
        if (i % 11 == 5)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
}