#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    int INDICE = 13, SOMA = 0, K = 0;
    enquanto K < INDICE faça
    {
        K = K + 1;
        SOMA = SOMA + K;
    }
    imprimir(SOMA);
    Ao final do processamento, qual será o valor da variável SOMA?
    */

    int indice = 13, soma = 0, k = 0;

    while (k < indice)
    {
        k++;
        soma += k;
    }

    printf("%d", soma); // Saída = 91

    return 0;
}
