#include <stdio.h>

int main()
{
    int valorN;

    printf("Informe o valor de n: ");
    scanf("%d", &valorN);

    for (int numero = 0; numero <= valorN; numero++)
    {
        if (numero % 2 == 0)
        {
            printf("%d ", numero);
        }
    }
    printf("\n");
    return 0;
}