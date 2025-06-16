#include <stdio.h>

// Um ponteiro é uma variável que guarda um endereço de memória

int main()
{
    int numero = 10;

    //printf("numero(valor) = %d\n", numero);
    //printf("numero(ender) = %p\n\n", &numero);

    int *ponteiro = &numero;

    //printf("pontei(valor) = %p\n", ponteiro);
    //printf("pontei(ender) = %p\n", &ponteiro);

    *ponteiro = 20; // numero = 20, com asterisco na frente da variável, ele vai acessar o endereço do ponteiro e atribue o endereço 

     //printf("numero(valor) = %d\n", numero);
     printf("pontei(valor) = %p\n", *ponteiro);

    return 0;
}