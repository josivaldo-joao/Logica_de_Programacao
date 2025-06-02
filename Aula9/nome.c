#include <stdio.h>
/*
int --> %d
float/double --> %f/%lf
char --> %c
string[] --> %s
*/
/*int main()
{
    char nome[20] = "Marcos"; // cadeia nome
    int idade = 20;
    float altura = 1.75;

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;
}*/
// O "&", tem a função de acessar o endereço da memória onde a variável está sendo executada
int main()
{
    char nome[20];
    int idade;
    float altura;
    char genero;

    printf("Digite o seu nome: ");
    scanf("%s", nome); // em string, não precisa do "&"
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    // getchar();
    printf("Digite seu genero: ");
    scanf(" %c", &genero); // aqui no "%c" temos que dar um espaço para ele ser lido, se não colocar o espaço, não irá ser imprimido, ou podemos usar o getchar(), sem precisar espaço
    
    printf("Seu nome: %s\n", nome);
    printf("Sua idade: %d\n", idade);
    printf("Sua altura: %.2f\n", altura);
    printf("Seu genero: %c\n", genero);
    return 0;
}