#include <stdio.h>
#include <stdlib.h>

void main()
{
    // DEFINE VARIÁVEIS E VETORES
    char sexos[4], sexo, experiencias[4], experiencia;
    float idades[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, idade, qtdFeminino = 0, qtdMasculino = 0, qtdMasculinoExperiente = 0, qtdMascMaisVelho = 0, qtdFemMaisNova = 0, somaIdadeM = 0, somaIdadeF = 0, conta = 1, idadeMenorFem, menor = 150;
    int indice = 0;

    do
    {
        // LÊ UM VALOR
        printf("\nDigite a idade: ");
        scanf("%f", &idade);

        // ENCERRA O LOOP
        if (idade == 0)
        {
            // MOSTRA OS RESULTADOS
            printf("\nResultados\n");
            printf("Quantidade sexo feminino: %.0f\n", qtdFeminino);
            printf("Quantidade sexo masculino: %.0f\n", qtdMasculino);
            printf("Idade media masculino experiente: %.2f\n", somaIdadeM / qtdMasculinoExperiente);
            printf("Porcentagem masculino idade > 45: %.2f%\n", (100 * qtdMascMaisVelho) / qtdMasculino);
            printf("Quantidade feminino idade < 35 experiente: %.0f\n", qtdFemMaisNova);
            printf("Menor idade feminino experiente: %.0f\n", idadeMenorFem);
            break;
        }

        // LÊ VALORES
        printf("Digite o sexo: ");
        scanf(" %c", &sexo);
        printf("Digite se tem experiencia (s/n): ");
        scanf(" %c", &experiencia);

        // SETA OS VALORES RECEBIDOS NOS RESPECTIVOS VETORES
        idades[indice] = idade;
        sexos[indice] = sexo;
        experiencias[indice] = experiencia;

        // IDENTIFICA O SEXO E FAZ A CONTAGEM DOS MESMOS
        if (sexos[indice] == 'm' || sexos[indice] == 'M')
        {
            qtdMasculino++;

            // IDENTIFICA SE HÁ EXPERIÊNCIA, FAZ A CONTAGEM E SOMA AS IDADES
            if (experiencias[indice] == 's' || experiencias[indice] == 'S')
            {
                qtdMasculinoExperiente++;
                somaIdadeM += idades[indice];
            }

            // IDENTIFICA E FAZ A CONTAGEM DAS IDADES ACIMA DE 45
            if (idades[indice] > 45)
            {
                qtdMascMaisVelho++;
            }
        }
        else if (sexos[indice] == 'f' || sexos[indice] == 'F')
        {
            qtdFeminino++;

            // IDENTIFICA SE HÁ EXPERIÊNCIA, FAZ A CONTAGEM DAS IDADES ABAIXO DE 35 E IDENTIFICA A MENOR IDADE
            if (experiencias[indice] == 's' || experiencias[indice] == 'S')
            {
                if (idades[indice] < 35)
                {
                    qtdFemMaisNova++;
                }
                if (idades[indice] < menor)
                {
                    idadeMenorFem = idades[indice];
                }
            }
        }

        // VARIÁVEL DE CONTROLE
        indice++;
    } while (1);
    system("pause");
}