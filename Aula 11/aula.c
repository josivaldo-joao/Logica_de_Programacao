#include <stdio.h>
#include <string.h>
//instrução
struct aluno
{
    char nome[50];
    int idade;
    float nota;
};

int main()
{
    struct aluno aluno1; // Declaração de variável

    aluno1.idade = 23; // Atribuição
    aluno1.nota = 7.5;
    strcpy(aluno1.nome, "Josivaldo");

    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %2f\n", aluno1.nota);

    struct aluno aluno2 = ("Eduardo", 17);

    rintf("Nome: %s\n", aluno2.nome);
    printf("Idade: %d\n", aluno2.idade);
    printf("Nota: %2f\n", aluno2.nota);

    struct aluno aluno3;

    printf("Digite o nome: ");
    scanf("%49[^\n]", aluno3.nome);
    printf("Digite a idade: ");
    scanf("%d", &aluno3.idade);
    printf("Digite sua nota: ");
    scanf("%f", &aluno3.nota);
    //int numero;
    //float real;

    return 0;
}
