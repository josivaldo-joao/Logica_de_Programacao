#include <stdio.h>

void mostrarSoma(int x, int y)
{
    int soma = x + y;
    printf("Soma: %d", x, y);

}
int retornarSoma(int x, int y)
{
    return x + y;
}
int main()
{
    int soma = retornarSoma(2, 3);
    printf("Soma: %d\n", soma);

    mostrarSoma(5, 7);
    return 0;
}

/*
Array

int main()
{
    int array[9];

    for (int i = 0; i < 9; i++)
    {   
        //leia(array[i])
        scanf("%d", &array[i]);
    }
}

Matriz

int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // leia(matriz[i])
           
        }
    }
}
*/