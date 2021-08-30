#include <stdio.h>
#include <stdlib.h>

void main()
{
    // DEFINI VARIAVEIS E VETORES
    char sexos[15], sexo;
    int i, qtdFeminino = 0, qtdMasculino = 0;
    float alturas[15], altura, maior = 0, menor = 10, somaAlturas = 0.0, media;

    for (i = 0; i <= 14; i++)
    {
        // LÊ VALORES
        printf("Digite altura: ");
        scanf("%f", &altura);
        printf("Digite o sexo: ");
        scanf(" %c", &sexo);
        alturas[i] = altura;
        sexos[i] = sexo;

        // IDENTIFICA A MAIOR E MENOR ALTURA
        if (alturas[i] > maior)
        {
            maior = alturas[i];
        }
        if (alturas[i] < menor)
        {
            menor = alturas[i];
        }

        // IDENTIFICA O SEXO E FAZ A CONTAGEM DA QUANTIDADE DOS MESMOS
        if (sexos[i] == 'f' || sexos[i] == 'F')
        {
            qtdFeminino++;

            // SOMA AS ALTURAS
            somaAlturas += alturas[i];
        }
        else if (sexos[i] == 'm' || sexos[i] == 'M')
        {
            qtdMasculino++;
        }
    }

    // CALCULA A MÉDIA DE ALTURA DAS MULHERES
    media = somaAlturas / qtdFeminino;

    // MOSTRA OS RESULTADOS
    printf("\nResultados\n");
    printf("A maior altura: %.2f\n", maior);
    printf("A menor altura: %.2f\n", menor);
    printf("A media de altura das mulheres: %.2f\n", media);
    printf("Quantidade de homens: %d\n", qtdMasculino);
    system("pause");
}