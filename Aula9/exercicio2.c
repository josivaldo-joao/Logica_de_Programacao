#include <stdio.h>

int main()
{
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade >=18)
    {
        printf("Voce eh maior de idade");
    }
    else
    {
        printf("Voce eh menor de idade");
    }
    
    return 0;
}