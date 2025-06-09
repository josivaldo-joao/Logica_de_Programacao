#include <stdio.h>
#include <string.h>

struct pessoa
{
        char nome[50];
        int idade;
};

int main()
{
    struct pessoa pessoa1;

    printf("---------CADASTRO--------\n");
    
    printf("Digite seu nome: ");
    scanf("%49[^\n]", pessoa1.nome);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);
    getchar();
    
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);

    return 0;
}
