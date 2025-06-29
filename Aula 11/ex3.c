#include <stdio.h>

struct Pessoa 
{
    char nome[100];
    int idade;
};

void exibirPessoa(struct Pessoa p) 
{
    printf("\nBem-vindo(a), %s!\n", p.nome);
    printf("Seus Dados:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
}

int main() 
{
    struct Pessoa pessoa;

    printf("Qual o seu nome? ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

    size_t len = strlen(pessoa.nome);
    if (len > 0 && pessoa.nome[len - 1] == '\n') 
{
        pessoa.nome[len - 1] = '\0';
    }

    printf("Qual a sua idade? ");
    scanf("%d", &pessoa.idade);

    
    exibirPessoa(pessoa);

    return 0;
}
