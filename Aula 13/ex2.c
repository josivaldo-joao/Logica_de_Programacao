#include <stdio.h>

void trocar(int *valor1, int *valor2)
{
    *valor1 = valor2;
    *valor2 = valor1;
}

int main()
{

    int valor1, valor2;

    printf("Digite o valor 1");
    scanf("%d", &valor1);
    
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    

    return 0;
}