#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float add(float number1, float number2)
{
    return number1 + number2;
}

float subtract(float number1, float number2)
{
    return number1 - number2;
}

float multiply(float number1, float number2)
{
    return number1 * number2;
}

float divide(float number1, float number2)
{
    return number1 / number2;
}

int main(int argc, char const *argv[])
{
    float number1, number2;
    int command;

    printf("\nCalculadora que recebe dois numeros e faz as quatros operacoes basicas da matematica.");
    printf("\n\n1 - somar\n2 - subtrair\n3 - multiplicar\n4 - dividir");

    printf("\n\nComando: ");
    scanf("%d", &command);
    printf("\nDigite o valor do primeiro numero: ");
    scanf("%f", &number1);
    printf("Digite o valor do segundo numero: ");
    scanf("%f", &number2);

    if (command == 1)
    {
        printf("Resultado da soma: %f\n", add(number1, number2));
    }
    else if (command == 2)
    {
        printf("Resultado da subtracao: %f\n", subtract(number1, number2));
    }
    else if (command == 3)
    {
        printf("Resultado da multiplicacao: %f\n", multiply(number1, number2));
    }
    else if (command == 4)
    {
        printf("Resultado da divisao: %f\n", divide(number1, number2));
    }
    else
    {
        printf("Comando invalido");
    }

    system("pause");
    return 0;
}
