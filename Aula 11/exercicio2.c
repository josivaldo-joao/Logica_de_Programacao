#include <stdio.h>

struct aluno
{
    char nome[50];
    float nota;
};

int main()
{
    struct aluno alunos[100];
    int qtd;
    float somaNotas = 0, media;

    printf("Quantos alunos voce quer cadastrar? ");
    scanf("%d", &qtd);
    getchar(); 

    for (int i = 0; i < qtd; i++)
    {
        printf("Nome: ");
        getchar(); 
        scanf("%49[^\n]", alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        
        somaNotas += alunos[i].nota;
    }

    media = somaNotas / qtd;

    for (int i = 0; i < qtd; i++)
    {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    printf("A média geral eh: %.2f\n", media);

    return 0;
}
