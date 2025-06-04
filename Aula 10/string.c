#include <stdio.h>

int main ()
{
    //int numeros[5] = {1, 2, 3, 4, 5};
    /*int numero;
    float real;
    char letra;
    // para string, não colocamos "&", no scanf

    printf("numero(int): %ld bytes\n",  sizeof(numero));
    printf("real(float): %ld bytes\n", sizeof(real));
    printf("numero(array): %ld bytes\n", sizeof(numeros));*/

    /*char letras[] = "abc";

    for (int i = 0; i < letras[i]; i++)
    {
        printf("Letra %d: %c\n", i, letras[i]); // imprimindo texto letra, 
    }*/
    char nome[20];
    scanf("%19[^\n]", nome);

    printf("Nome: %s\n", nome);

    return 0;
}