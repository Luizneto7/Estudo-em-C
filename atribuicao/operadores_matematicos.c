// Aqui utilizaremos operadores aritméticos, de atribuição e de incremento e decremento para familiarizar.
#include <stdio.h>

int main()
{
    int number1;
    int number2;

    //-Entrada de dados: Processo de recebimento ou inserção de dados que vamos utilizar no programa.
    printf("\n\nInsira o primeiro número: \n\n");
    scanf("%d", &number1);

    printf("\n\nInsira o segundo número: \n\n");
    scanf("%d", &number2);
    // Operadores aritméticos, onde iremos submeter os dados inseridos e calculá-los de acordo com o operador:
    // result = number1 + number2;
    // printf("Resultado da soma: %d", result);

    // result = number1 - number2;
    // printf("Resultado da subtração: %d", result);

    // result = number1 * number2;
    // printf("Resultado da multiplicação: %d", result);

    // result = number1 / number2;
    // printf("Resultado da divisão: %.2f", result);

    // Operadores de atribuição:
    // number1 += 2; // a = 12
    // number2 *= 3; // b = 15
    // printf("\n Resultados de += e *=: %d %d", number1, number2);
    // Operadores de incremento e decremento:
    number1++;
    number2--;
    printf("\n Resultados de incremento e decremento: %d %d\n", number1, number2);
    // Saída de dados: exibir os valores calculados que foram armazenados

    // printf("Novo valor de a após o a += 2: %d\n", a);
    // printf("Novo valor de b após o b *= 3: %d\n", b);
    return 0;
}