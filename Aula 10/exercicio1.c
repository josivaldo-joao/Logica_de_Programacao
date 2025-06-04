#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20], tamanho;

    printf("Digite uma palavra: ");
    scanf("%19[^\n]", palavra);

    tamanho = strlen(palavra);

    if (tamanho > 15)
    {
        printf("Palavra longa");
    }
    else if (tamanho > 8 && tamanho < 15)
    {
        printf("Palavra media");
    }
    else if (tamanho > 5 && tamanho < 8)
    {
        printf("Palavra Pequena");
    }
    else
    {
        return 0;
    }
    
}