#include <stdio.h>

int main()
{
    int numero, soma = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    } 
    while (numero !=0);

    printf("A soma dos nu]mero digitados eh: %d\n", soma);
    return 0;
}