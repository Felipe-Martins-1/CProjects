#include <stdio.h>
#include <stdlib.h>

void main()
{
    // DEFINE VARIÁVEIS
    double grausF = 50, grausC;

    for (int i = 1; i <= 16; i++)
    {
        // CALCULA A CONVERSÃO DE TEMPERATURA
        grausC = 5.0 / 9.0 * (grausF - 32.0);

        // MOSTRA O RESULTADO
        printf("%.0lf graus Fahrenheit = %.2lf graus Centigrados\n", grausF, grausC);

        grausF++;
    }
    system("pause");
}