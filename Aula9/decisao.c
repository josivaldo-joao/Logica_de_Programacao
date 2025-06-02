#include <stdio.h>

/*
se-senao -> if-else
senao se -> else if
escolha -> switch
caso -> case
caso contrário -> default
pare - break

REPETIÇÃO

para -> for
enquanto -> while
faça-enquanto -> do-while 
*/

/*int main()
{
    int dia = 3;

    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3: 
        printf("terca");
        break;
    default:
        break; // opcional
    }
}*/

/*int main()
{
    int i = 0;

    do
    {
        printf("i = %d\n", i);
    } 
    while (i < 100);

    return 0;
    
}*/

int retornarSoma(int x, int y)
{
    return x + y;
}

int main()
{
    int soma = retornarSoma(2, 3);
    printf("Soma: %d\n", soma);

    return 0; 
}