#include <stdio.h>
#include <string.h>

void inverterString(char *str)
{
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    while (fim > inicio)
    {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

int main()
{

    /**
     * Escreva um programa que inverta os caracteres de um string.
     * IMPORTANTE:
     *  a) Essa string pode ser informada através de qualquer entrada de sua preferência
     * ou pode ser previamente definida no código;
     *  b) Evite usar funções prontas, como, por exemplo, reverse;
     */
    char string[100];

    printf("Informe uma string: ");
    fgets(string, sizeof(string), stdin);

    // Tratando a string para remover o \n do final
    if (string[strlen(string) - 1] == '\n')
        string[strlen(string) - 1] = '\0';

    inverterString(string);

    printf("\nString invertida: %s", string);

    return 0;
}
