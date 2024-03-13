#include <stdio.h>

int fibonacci(entrada)
{
    int pertence = 0;
    int anterior = 0, atual = 1;
    int proximo;

    while (anterior <= entrada)
    {
        if (anterior == entrada)
        {
            pertence = 1;
        }

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return pertence;
}

int main(int argc, char const *argv[])
{
    /**
     * Dado a sequência de Fibonacci, onde se inicia por 0 e 1
     * e o próximo valor sempre será a soma dos 2 valores anteriores
     * (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
     * escreva um programa na linguagem que desejar onde, informado um número,
     * ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado
     * pertence ou não a sequência.
     *
     * IMPORTANTE:Esse número pode ser informado através de qualquer entrada de sua preferência
     * ou pode ser previamente definido no código;
     */

    int entrada;

    printf("Inform um numero de entrada: ");
    scanf("%d", &entrada);
    if (1 == fibonacci(entrada))
        printf("O numero %d pertence a sequencia de Fibonacci", entrada);
    else
        printf("O numero %d nao pertence a sequencia de Fibonacci", entrada);
        return 0;
}
