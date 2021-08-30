#include <stdio.h>
#include <stdlib.h>

void main()
{
    // DIFINE VARIÁVEIS E UM VETOR
    int numero, numeros[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i = 0, maior = 0, menor;

    while (1)
    {
        // LÊ UM VALOR
        printf("Digite um numero: ");
        scanf("%d", &numero);

        // ENCERRA O LOOP
        if (numero == 0)
        {

            // IDENTIFICA O MAIOR VALOR
            for (i = 0; i <= 19; i++)
            {
                if (numeros[i] > maior)
                {
                    maior = numeros[i];
                }
            }

            // IDENTIFICA O MENOR VALOR
            menor = maior;
            for (i = 0; i <= 19; i++)
            {
                if (numeros[i] == 0)
                {
                    break;
                }
                else if (numeros[i] < menor)
                {
                    menor = numeros[i];
                }
            }

            // MOSTRA OS RESULTADOS
            printf("O maior valor: %d\n", maior);
            printf("O menor valor: %d\n", menor);
            break;
        }
        else if (numero < 0)
        {
            printf("Esses valores (zero e negativos) nao entrarao nos calculos.\n");
        }
        else
        {
            // ACRESCENTA UM VALOR NO VETOR
            numeros[i] = numero;

            // VARIÁVEL DE CONTROLE
            i++;
        }
    }
    system("pause");
}