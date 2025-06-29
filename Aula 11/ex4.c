#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
} Produto;

int buscarProduto(Produto produtos[], int quantidade, char nomeBusca[]) 
{
    for (int i = 0; i < quantidade; i++) 
    {
        if (strcmp(produtos[i].nome, nomeBusca) == 0) 
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    Produto produtos[3];
    char nomeBusca[50];

    printf("--- CADASTRO ---\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("Produto %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
    }

    printf("\nVocê deseja procurar qual produto? ");
    scanf(" %[^\n]", nomeBusca);

    int indice = buscarProduto(produtos, 3, nomeBusca);
    if (indice != -1) 
    {
        printf("A %s custa R$ %.2f.\n", produtos[indice].nome, produtos[indice].preco);
    } 
    else 
    {
        printf("Produto não encontrado.\n");
    }

    return 0;
}
