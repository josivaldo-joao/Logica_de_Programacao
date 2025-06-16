#include <stdio.h>

int main()
{
    int valorOrig, valorNovo;
    int *ponteiro = &valorOrig;

    printf("Digite o valor original: ");
    scanf("%d", &valorOrig);

    printf("Digite o novo valor: ");
    scanf("%d", &valorNovo);

    printf("Valor original: %d\n", valorOrig);
    
    *ponteiro = valorNovo;

    printf("Novo valor apos a modificacao via ponteiro: %d\n", *ponteiro);

    return 0;
}