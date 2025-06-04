#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


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
            criarConta();
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
