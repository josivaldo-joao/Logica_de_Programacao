#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[50];
    int idade;
    float nota;
};

int main()
{
    struct aluno alunos[3]; //Array de 3 posíções
    //int numeros[3]; //Array de 3 posições 


    for (int i = 0; i < 3; i++)
    {
        printf("Nome: ");
        scanf("%49[^\n]", alunos[i].nome); // Acessando o nome do aluno na posição i
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
    }
    
    
    return 0;
}