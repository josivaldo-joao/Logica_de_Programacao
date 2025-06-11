#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

#define MAX_CONTAS 100

typedef struct
{
    int numero;
    char nome[100];
    float saldo;
}conta;

conta contas[MAX_CONTAS];
int totalContas = 0;

void criarConta(char nome[])
{
    if (totalContas < MAX_CONTAS)
    {
        contas[totalContas].numero = totalContas + 1;
        strcpy(contas[totalContas].nome, nome);
        contas[totalContas].saldo = 0.0; 
        printf("Conta criada com sucesso! Numero: %d, Nome: %s, Saldo: RS%2.f\n", contas[totalContas].numero, contas[totalContas].nome, contas[totalContas].saldo);
        totalContas++;
    }
    else
    {
        printf("Limite de contas atingido!\n"); 
    }
}
void exibirContas()
{
    for (int  i = 0; i < totalContas; i++)
    {
        printf("Numero: %d, Nome: %s, Saldo: R$.2f\n", contas[i].numero, contas[i].nome, contas[i]. saldo);
    }
    
}

int mostrarMenu ()
{
    int selecionarOpcao;

    printf("===== SISTEMA BANCARIO =====\n");
    printf("0 - Sair\n");
    printf("1 - Criar Conta\n");
    printf("2 - Exibir Conta\n");
    printf("3 - Depositar\n");
    printf("4 - Sacar\n");
    printf("5 - Buscar Conta\n");
    printf("=============================\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &selecionarOpcao);

    return selecionarOpcao;
}

void criarConta()
{
    printf("Opcao criar conta selecionada.\n");
}

void exibirConta()
{
    printf("Opcao Exibir Contas selecionada.\n");
}

void depositar()
{
    printf("Opcao Depositar selecionada.\n");
}

void sacar()
{
    printf("Opcao Sacar selecionada.\n");
}

void buscarConta()
{
    printf("Opcao Buscar Conta selecionada.\n");
}

int main()
{
    int opcao;

    do
    {
        opcao = mostrarMenu(0);

        switch (opcao)
        {
        case 0:
            printf("Saindo do sitema...\n");
            break;
        case 1: 
            criarConta(0);
            break;
        case 2: 
            exibirConta();
            break;
        case 3:
            depositar();
            break;
        case 4:
            sacar();
            break;
        case 5: 
            buscarConta();
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
        Sleep(2000);
        system("cls");
    } 
    while (opcao != 0);
    
    return 0; 
}
