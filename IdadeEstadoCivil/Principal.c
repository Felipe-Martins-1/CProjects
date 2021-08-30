#include <stdio.h>
#include <stdlib.h>

void main()
{
    // DEFINE VARIÁVEIS E VETORES
    char estadosCivis[6], estadoCivil;
    int i;
    float somaIdades = 0, media, porcentagem, idades[6], idade, qtdCasado = 0, qtdSolteiro = 0, qtdSeparado = 0, qtdViuvo = 0;

    for (i = 0; i <= 5; i++)
    {
        // LÊ VALORES
        printf("Digite idade: ");
        scanf("%f", &idade);
        printf("Digite o estado civil: ");
        scanf(" %c", &estadoCivil);

        // SETA OS VALORES NOS RESPECTIVOS VETORES
        idades[i] = idade;
        estadosCivis[i] = estadoCivil;

        // FAZ A CONTAGEM DE CADA ESTADO CIVIL E A SOMA DAS IDADES DOS VIÚVOS
        if (estadosCivis[i] == 'c' || estadosCivis[i] == 'C')
        {
            qtdCasado++;
        }
        else if (estadosCivis[i] == 's' || estadosCivis[i] == 'S')
        {
            qtdSolteiro++;
        }
        else if (estadosCivis[i] == 'v' || estadosCivis[i] == 'V')
        {
            qtdViuvo++;
            somaIdades += idades[i];
        }
        else if (estadosCivis[i] == 'd' || estadosCivis[i] == 'D')
        {
            qtdSeparado++;
        }
    }

    // CALCULA A MÉDIA DAS IDADES DOS VIÚVOS
    media = somaIdades / qtdViuvo;

    // CALCULA A PORCENTAGEM DOS SEPAREDOS
    porcentagem = (qtdSeparado * 100) / 6;

    // MOSTRA OS RESULTADOS
    printf("\nResultados\n");
    printf("Quantidade de casados: %.0f\n", qtdCasado);
    printf("Quantidade de solteiros: %.0f\n", qtdSolteiro);
    printf("A media das idades dos viuvos: %.2f\n", media);
    printf("A porcentagem dos separados: %.2f%\n", porcentagem);
    system("pause");
}