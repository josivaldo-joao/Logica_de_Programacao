#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <locale.h>

#define MAX_CONTAS 100



typedef struct 
{
    int numero;
    char nome[100];
    float saldo;
} Conta;

int mostrarMenu() 
{
    int selecionarOpcao;

    printf("===== SISTEMA BANCARIO =====\n");
    printf("0 - Sair\n");
    printf("1 - Criar Conta\n");
    printf("2 - Exibir Conta\n");
    printf("3 - Depositar\n");
    printf("4 - Sacar\n");
    printf("5 - Buscar Conta\n");
    printf("6 - Transferir\n");
    printf("7 - Deletar Conta\n");
    printf("8 - Editar Conta\n");
    printf("=============================\n");
    printf("Escolha uma opçao: ");
    scanf("%d", &selecionarOpcao);
    getchar();

    return selecionarOpcao;
}

int contaExiste(Conta contas[], int numero, int *totalContas, int *ids) 
{
    for (int i = 0; i < *totalContas; i++) 
    {
        if (contas[i].numero == numero) 
        {
            return i; 
        }
    }
    return -1;
}

void carregando() 
{
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".\n");
}

void criarConta(Conta contas[], int *totalContas, int *ids) 
{
    if (totalContas >= MAX_CONTAS) 
    {
        printf("O sistema atingiu o limite de contas!\n");
        return;
    }
    
    int i = totalContas;
    printf("--- CADASTRO ---\n");
    printf("Digite seu nome: ");
    fgets(contas[i].nome, 100, stdin);
    contas[i].nome[strcspn(contas[i].nome, "\n")] = '\0';
    contas[i].numero = ids;
    contas[i].saldo = 0.0;

    printf("\nOlÃ¡, %s! Sua conta foi criada com sucesso!\n", contas[i].nome);
    printf("--- DADOS ---\n");
    printf("NÃºmero: %d\n", contas[i].numero);
    printf("Nome: %s\n", contas[i].nome);
    printf("Saldo: R$ %.2f\n", contas[i].saldo);

    (*ids)++;
    (*totalContas)++;
}

void exibirContas(Conta contas[], int *totalContas, int *ids) 
{
    if (*totalContas == 0) 
    {
        printf("Nenhuma conta cadastrada!\n");
        return;
    }
    for (int i = 0; i < *totalContas; i++) 
    {
        printf("\n--- CONTA %d ---\n", i + 1);
        printf("Numero: %d\n", contas[i].numero);
        printf("Nome: %s\n", contas[i].nome);
        printf("Saldo: R$ %.2f\n", contas[i].saldo);
    }
}

void depositar(Conta contas[]) 
{
    int numero;
    printf("\nDigite o nÃºmero da conta: ");
    scanf("%d", &numero);
    getchar(); 

    printf("Buscando conta");
    carregando();

    int i = contaExiste(contas, numero);
    if (i == -1) 
    {
        printf("Conta nÃ£o encontrada.\n");
        return;
    }
    
    float valorDeposito;
    printf("\nInforme o valor depÃ³sito: ");
    scanf("%f", &valorDeposito);
    getchar(); 

    if (valorDeposito <= 0) 
    {
        printf("Valor InvÃ¡lido.\n");
    } 
    else 
    {
        contas[i].saldo += valorDeposito;
        printf("\n--- DADOS ATUALIZADOS ---\n");
        printf("NÃºmero: %d\n", contas[i].numero);
        printf("Nome: %s\n", contas[i].nome);
        printf("Saldo: R$ %.2f\n\n", contas[i].saldo);
    }
}

void sacar(Conta contas[]) 
{
    int numero;
    printf("\nDigite o numero da conta: ");
    scanf("%d", &numero);
    getchar(); 

    printf("Buscando conta");
    carregando();

    int i = contaExiste(contas, numero);
    if (i == -1) 
    {
        printf("Conta nÃ£o encontrada.\n");
        return;
    }
    
    float valorSaque;
    printf("\nInforme o valor do saque: ");
    scanf("%f", &valorSaque);
    getchar(); 

    if (valorSaque <= 0) 
    {
        printf("Valor de saque invÃ¡lido.\n");
    } 
    else 
    {
        if (valorSaque > contas[i].saldo) 
        {
            printf("Saldo em conta insuficiente.\n");
        } 
        else 
        {
            contas[i].saldo -= valorSaque;
            printf("\n--- DADOS ATUALIZADOS ---\n");
            printf("NÃºmero: %d\n", contas[i].numero);
            printf("Nome: %s\n", contas[i].nome);
            printf("Saldo: R$ %.2f\n\n", contas[i].saldo);
        }
    }
}

void buscarConta(Conta contas[]) 
{
    int numero;
    printf("\nDigite o numero da conta: ");
    scanf("%d", &numero);
    getchar(); 

    printf("Buscando conta");
    carregando();

    int i = contaExiste(contas, numero);
    if (i == -1) 
    {
        printf("Conta nÃ£o encontrada.\n");
        return;
    }
    
    printf("\n--- DADOS ---\n");
    printf("NÃºmero: %d\n", contas[i].numero);
    printf("Nome: %s\n", contas[i].nome);
    printf("Saldo: R$ %.2f\n\n", contas[i].saldo);
}

void transferir(Conta contas[]) 
{
    int numeroOrigem;
    printf("\nInforme o nÃºmero da conta de origem: ");
    scanf("%d", &numeroOrigem);
    getchar(); 

    int numeroDestino;
    printf("\nInforme o nÃºmero da conta de destino: ");
    scanf("%d", &numeroDestino);
    getchar(); 

    printf("Buscando contas");
    carregando();

    int indiceOrigem = contaExiste(contas, numeroOrigem);
    int indiceDestino = contaExiste(contas, numeroDestino);

    if (indiceOrigem == -1) 
    {
        printf("Conta de origem nÃ£o encontrada.\n");
        return;
    }
    if (indiceDestino == -1) 
    {
        printf("Conta de destino nÃ£o encontrada.\n");
        return;
    }
    
    float valorTransferencia;
    printf("\nInforme o valor da transferÃªncia: ");
    scanf("%f", &valorTransferencia);
    getchar(); 

    if (valorTransferencia <= 0) 
    {
        printf("Valor invÃ¡lido.\n");
    } 
    else 
    {
        if (valorTransferencia > contas[indiceOrigem].saldo) 
        {
            printf("Saldo em conta insuficiente.\n");
        } 
        else 
        {
            contas[indiceOrigem].saldo -= valorTransferencia;
            contas[indiceDestino].saldo += valorTransferencia;

            printf("\n--- DADOS DA CONTA ORIGEM ---\n");
            printf("NÃºmero: %d\n", contas[indiceOrigem].numero);
            printf("Nome: %s\n", contas[indiceOrigem].nome);
            printf("Saldo: R$ %.2f\n\n", contas[indiceOrigem].saldo);

            printf("\n--- DADOS DA CONTA DESTINO ---\n");
            printf("NÃºmero: %d\n", contas[indiceDestino].numero);
            printf("Nome: %s\n", contas[indiceDestino].nome);
            printf("Saldo: R$ %.2f\n\n", contas[indiceDestino].saldo);
        }
    }
}

void deletarConta(Conta contas[]) 
{
    int numero;
    printf("\nInforme o número da conta a ser deletada: ");
    scanf("%d", &numero);
    getchar(); 

    printf("Buscando conta");
    carregando();

    int indice = contaExiste(contas, numero);
    if (indice == -1) 
    {
        printf("Conta nÃ£o encontrada.\n");
        return;
    }
    
    for (int i = indice; i < totalContas - 1; i++) 
    {
        strcpy(contas[i].nome, contas[i + 1].nome);
        contas[i].numero = contas[i + 1].numero;
        contas[i].saldo = contas[i + 1].saldo;
    }

    printf("Conta deletada com sucesso!\n");

    
    strcpy(contas[totalContas - 1].nome, "");
    contas[totalContas - 1].numero = 0;
    contas[totalContas - 1].saldo = 0.0;

    totalContas--;
}

void editarConta(Conta contas[]) 
{
    int numero;
    printf("Informe o nÃºmero da conta: ");
    scanf("%d", &numero);
    getchar(); 

    printf("Buscando conta");
    carregando();

    int indice = contaExiste(contas, numero);
    if (indice == -1) 
    {
        printf("\nConta nÃ£o encontrada!\n");
        return;
    }
    
    printf("\n--- DADOS DA CONTA ---\n");
    printf("Nome atual: %s\n", contas[indice].nome);
    printf("Novo nome: ");
    fgets(contas[indice].nome, 100, stdin);
    contas[indice].nome[strcspn(contas[indice].nome, "\n")] = '\0';
    
    printf("\n--- DADOS ATUALIZADOS ---\n");
    printf("NÃºmero: %d\n", contas[indice].numero);
    printf("Nome: %s\n", contas[indice].nome);
    printf("Saldo: R$ %.2f\n", contas[indice].saldo);
}

int main() 
{   
    int ids = 1001;
    int totalContas = 0;
    int opcao;

    Conta contas[MAX_CONTAS];
    
    setlocale(LC_ALL, "portuguese");

    do 
    {
        opcao = mostrarMenu();

        switch (opcao) 
        {
            case 0:
                printf("Saindo do sistema...\n");
                carregando();
                break;
            case 1: 
                criarConta(contas);
                break;
            case 2: 
                exibirContas(contas);
                break;
            case 3:
                depositar(contas);
                break;
            case 4:
                sacar(contas);
                break;
            case 5:  
                buscarConta(contas);
                break;
            case 6:
                transferir(contas);
                break;
            case 7:
                deletarConta(contas);
                break;
            case 8:
                editarConta(contas);
                break;
            default:
                printf("OpÃ§Ã£o invÃ¡lida. Tente novamente.\n");
                break;
        }
        
        if (opcao != 0)
        {
            printf("\nPressione Enter para continuar...");
            getchar();
            system("cls");
        }
    } 
    while (opcao != 0);
    
    return 0; 
}