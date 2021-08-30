#include <stdio.h>
#include <stdlib.h>

void main()
{
    // DEFINE VARIÁVEIS E UM VETOR
    float porcentagem, votos[] = {0, 0, 0, 0, 0, 0}, voto, qtdVotos = 0;

    while (1)
    {
        // LÊ UM VALOR
        printf("\n1 - Candidato 1\n2 - Candidato 2\n3 - Candidato 3\n4 - Candidato 4\n5 - Nulo\n6 - Em branco\n");
        printf("Digite o seu voto: ");
        scanf("%f", &voto);

        if (voto == 1)
        {
            votos[0] += 1; // CORRESPONDE AO VOTO NO CANDIDATO 1
        }
        else if (voto == 2)
        {
            votos[1] += 1; // CORRESPONDE AO VOTO NO CANDIDATO 2
        }
        else if (voto == 3)
        {
            votos[2] += 1; // CORRESPONDE AO VOTO NO CANDIDATO 3
        }
        else if (voto == 4)
        {
            votos[3] += 1; // CORRESPONDE AO VOTO NO CANDIDATO 4
        }
        else if (voto == 5)
        {
            votos[4] += 1; // CORRESPONDE AO VOTO NULO
        }
        else if (voto == 6)
        {
            votos[5] += 1; // CORRESPONDE AO VOTO EM BRANCO
        }
        else if (voto == 0)
        {
            // MOSTRA OS RESULTADOS
            printf("\nResultados\n");
            printf("Candidato 1: %.0f\n", votos[0]);
            printf("Candidato 2: %.0f\n", votos[1]);
            printf("Candidato 3: %.0f\n", votos[2]);
            printf("Candidato 4: %.0f\n", votos[3]);
            printf("Nulo: %.0f\n", votos[4]);
            printf("Em branco: %.0f\n", votos[5]);
            printf("Total de votos: %.0f\n", qtdVotos);
            printf("Porcentagem nulos: %.2f%\n", (votos[4] * 100) / qtdVotos);
            printf("Porcentagem em branco: %.2f%\n", (votos[5] * 100) / qtdVotos);
            break;
        }
        else
        {
            printf("\nVoto invalido\n");
        }
        qtdVotos++;
    }
    system("pause");
}