#include <stdio.h>
#include <stdlib.h>

void main()
{
    // DEFINE VARÁVEIS
    int grupo1 = 0, grupo2 = 0, grupo3 = 0, grupo4 = 0, grupo5 = 0, idade, i;

    for (i = 1; i <= 15; i++)
    {
        // LÊ UM VALOR
        printf("Digite a idade: ");
        scanf("%d", &idade);

        // ACRESCENTA MAIS 1 NO GRUPO QUANDO A IDADE CORRESPONDE A FAIXA ETÁRIA DETERMINADA
        if (idade >= 1 && idade <= 15)
        {
            grupo1++;
        }
        else if (idade >= 16 && idade <= 30)
        {
            grupo2++;
        }
        else if (idade >= 31 && idade <= 45)
        {
            grupo3++;
        }
        else if (idade >= 46 && idade <= 60)
        {
            grupo4++;
        }
        else if (idade >= 61)
        {
            grupo5++;
        }
    }

    // DEFINI VETORES
    float porcentagens[5];
    int grupos[] = {grupo1, grupo2, grupo3, grupo4, grupo5};

    // CALCULA AS PORCENTAGENS
    for (i = 0; i < 5; i++)
    {
        porcentagens[i] = (grupos[i] * 100) / 15;
    }

    // MOSTRA OS RESULTADOS
    printf("1 - 15 anos: %d (%.1f%)\n", grupo1, porcentagens[0]);
    printf("16 - 30 anos: %d (%.1f%)\n", grupo2, porcentagens[1]);
    printf("31 - 45 anos: %d (%.1f%)\n", grupo3, porcentagens[2]);
    printf("46 - 60 anos: %d (%.1f%)\n", grupo4, porcentagens[3]);
    printf("Maior ou igual a 61: %d (%.1f%)\n", grupo5, porcentagens[4]);
    system("pause");
}