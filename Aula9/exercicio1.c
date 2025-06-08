#include <stdio.h>

int main()
{
    char nome[20]; 
    int idade;
    float nota;

    printf("Qual o seu nome? ");
    scanf("%s", nome);
    
    printf("Qual sua idade? ");
    scanf("%d", &idade);

    printf("Qual a sua nota? ");
    scanf("%f", &nota);

    printf("Aluno: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Nota: %.2f", nota);

    return 0;
}