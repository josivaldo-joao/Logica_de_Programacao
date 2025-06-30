#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <locale.h>

#define MAX_PACIENTES 100

typedef struct
{
    int codigoPlano;
    char nomePlano[50];
    float valorMensal;
    int ativo; // 1 para ativo, 0 para inativo
} Plano;

typedef struct 
{
    int codigo;
    char nome[50];
    int idade;
    char diagnostico[100];
    Plano planoPaciente; 
} Paciente;

void carregarDados(Paciente pacientes[], int *i, int *idAtual);
void salvarDados(Paciente pacientes[], int totalPacientes);

// Funções utilitárias
int mostrarMenu();
int pacienteExiste(Paciente pacientes[], int totalPacientes, int codigo);
void carregando();
void limparBuffer();

void cadastrarPaciente(Paciente pacientes[], int *totalPacientes, int *ids);
void exibirPaciente(Paciente pacientes[], int totalPacientes);
void buscarPaciente(Paciente pacientes[], int totalPacientes);
void atualizarDados(Paciente pacientes[], int totalPacientes);
void excluirPaciente(Paciente pacientes[], int *totalPacientes);
void listarIdade(Paciente pacientes[], int totalPacientes);
void listarDiagnostico(Paciente pacientes[], int totalPacientes);
void criarPlano(Paciente pacientes[], int totalPacientes);
void cancelarPlano(Paciente pacientes[], int totalPacientes);

// Limpar buffer de entrada
void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// Função do Banco de dados 
void carregarDados(Paciente pacientes[], int *i, int *idAtual) 
{
    FILE *arquivo = fopen("pacientes.txt", "r");
    if (arquivo == NULL) 
    {
        *idAtual = 1001;
        return;
    }

     while (fscanf(arquivo, "%d, %49[^,], %d, %99[^,], %d, %49[^,], %f, %d\n", 
                &pacientes[*i].codigo, pacientes[*i].nome, &pacientes[*i].idade, pacientes[*i].diagnostico, 
                &pacientes[*i].planoPaciente.codigoPlano, pacientes[*i].planoPaciente.nomePlano,
                &pacientes[*i].planoPaciente.valorMensal, &pacientes[*i].planoPaciente.ativo) == 8)
    {
        (*i)++;
    }

    *idAtual = (*i > 0) ? pacientes[*i - 1].codigo + 1 : 1001;

    fclose(arquivo);
}

void salvarDados(Paciente pacientes[], int totalPacientes) 
{
    FILE *arquivo = fopen("pacientes.txt", "w");
    if (arquivo == NULL) 
    {
        printf("Erro ao escrever o arquivo!\n");
        return;
    }

   for (int i = 0; i < totalPacientes; i++)
    {
        // Salvando dados 
        fprintf(arquivo, "%d, %s, %d, %s, %d, %s, %.2f, %d\n",
                pacientes[i].codigo, pacientes[i].nome, pacientes[i].idade, pacientes[i].diagnostico,
                pacientes[i].planoPaciente.codigoPlano, pacientes[i].planoPaciente.nomePlano,
                pacientes[i].planoPaciente.valorMensal, pacientes[i].planoPaciente.ativo);
    }

    printf("Dados salvos com sucesso.\n");
    
    fclose(arquivo);
}

int pacienteExiste(Paciente pacientes[], int totalPacientes, int codigo)
{
    if (totalPacientes == 0)
    {
        printf("Nenhum paciente cadastrado!\n");
        return -2;
    }
    
    for (int i = 0; i < totalPacientes; i++)
    {
        if (pacientes[i].codigo == codigo)
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
}

void cadastrarPaciente(Paciente pacientes[], int *totalPacientes, int *ids)
{
    if (*totalPacientes >=  MAX_PACIENTES)
    {
        printf("O sistema atingiu o limite de pacientes!");
        return;
    }
    
    int i = *totalPacientes;
    char idadeS[10];

    printf("--- CADASTRO ---\n");
    printf("Digite o seu nome: ");
    fgets(pacientes[i].nome, sizeof(pacientes[i].nome), stdin);
    printf("Digite sua idade: ");
    fgets(idadeS, sizeof(idadeS), stdin);
    printf("Qaul o seu diagnóstico: ");
    fgets(pacientes[i].diagnostico, sizeof(pacientes[i].diagnostico), stdin);

    // Removendo quebra de linhas
    pacientes[i].nome[strcspn(pacientes[i].nome, "\n")] = '\0'; 
    pacientes[i].idade = atoi(idadeS);
    pacientes[i].diagnostico[strcspn(pacientes[i].diagnostico, "\n")] = '\0';
    pacientes[i].codigo = *ids;

    // Inicializa o plano do paciente como inativo
    pacientes[i].planoPaciente.ativo = 0;
    pacientes[i].planoPaciente.codigoPlano = 0; // Código 0 para plano não atribuído
    strcpy(pacientes[i].planoPaciente.nomePlano, "N/A");
    pacientes[i].planoPaciente.valorMensal = 0.0;

    printf("Olá, %s! Seu cadastro foi efetuado com sucesso!\n", pacientes[i].nome);

    printf("--- DADOS ---\n");
    printf("Código: %d\n", pacientes[i].codigo);
    printf("Nome: %s\n", pacientes[i].nome);
    printf("Idade: %d\n", pacientes[i].idade);
    printf("Diagnóstico: %s\n",pacientes[i].diagnostico);

    (*ids)++;
    (*totalPacientes)++;

}

void exibirPaciente(Paciente pacientes[], int totalPacientes)
{
    if (totalPacientes == 0)
    {
        printf("Nenhuma conta cadastrada!\n");
    }

    for (int i = 0; i < totalPacientes; i++)
    {
        printf("\n--- PACIENTE %d ---\n", i + 1);
        printf("Código: %d\n", pacientes[i].codigo);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Diagnóstico: %s\n", pacientes[i].diagnostico);
        printf("--- PLANO ---\n");
        if (pacientes[i].planoPaciente.ativo)
        {
            printf("Código do Plano: %d\n", pacientes[i].planoPaciente.codigoPlano);
            printf("Nome do Plano: %s\n", pacientes[i].planoPaciente.nomePlano);
            printf("Valor Mensal: %.2f\n", pacientes[i].planoPaciente.valorMensal);
        }
        else
        {
            printf("Nenhum plano ativo.\n");
        }
    }
    
}

void buscarPaciente(Paciente pacientes[], int totalPacientes)
{
    int codigo;
    printf("\nDigite o código do Paciente: ");
    scanf("%d", &codigo);
    limparBuffer();

    int i = pacienteExiste(pacientes, totalPacientes, codigo);

    printf("Buscando Paciente");
    carregando();

    if (i == -1)
    {
        printf("Paciente não encontrado.\n");
        return;
    }
    
    if (i >= 0)
    {
        printf("\n--- DADOS ---\n");
        printf("Código: %d\n", pacientes[i].codigo);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Diagnóstico: %s\n", pacientes[i].diagnostico);
        printf("--- PLANO ---\n");
        if (pacientes[i].planoPaciente.ativo)
        {
            printf("Código do Plano: %d\n", pacientes[i].planoPaciente.codigoPlano);
            printf("Nome do Plano: %s\n", pacientes[i].planoPaciente.nomePlano);
            printf("Valor Mensal: %.2f\n", pacientes[i].planoPaciente.valorMensal);
        }
        else
        {
            printf("Nenhum plano ativo.\n");
        }
    }
}

void atualizarDados(Paciente pacientes[], int totalPacientes)
{
    int codigo;
    printf("Informe o código do paciente: ");
    scanf("%d", &codigo);
    limparBuffer();

    int indice = pacienteExiste(pacientes, totalPacientes, codigo);

    printf("Buscando paciente");
    carregando();

    if (indice == -1)
    {
        printf("\nPaciente não encontrado!");
        return;
    }

    printf("\n--- DADOS DO PACIENTE ---\n");
    printf("Nome: %s\n", pacientes[indice].nome);
    printf("Idade: %d\n", pacientes[indice].idade);
    printf("Diagnóstico: %s\n", pacientes[indice].diagnostico);

    printf("\nNovo nome (atual: %s): ", pacientes[indice].nome);
    fgets(pacientes[indice].nome, sizeof(pacientes[indice].nome), stdin);
    pacientes[indice].nome[strcspn(pacientes[indice].nome, "\n")] = '\0';

    char novaIdade[10];
    printf("Nova idade (atual: %d): ", pacientes[indice].idade);
    fgets(novaIdade, sizeof(novaIdade), stdin);
    pacientes[indice].idade = atoi(novaIdade);

    printf("Novo diagnóstico (atual: %s): ", pacientes[indice].diagnostico);
    fgets(pacientes[indice].diagnostico, sizeof(pacientes[indice].diagnostico), stdin);
    pacientes[indice].diagnostico[strcspn(pacientes[indice].diagnostico, "\n")] = '\0';

    printf("\nDados atualizados com sucesso!\n");
}

void excluirPaciente(Paciente pacientes[], int *totalPacientes)
{
    int codigo;
    printf("\nInfforme o código do paciente: ");
    scanf("%d", &codigo);
    limparBuffer();

    int indice = pacienteExiste(pacientes, *totalPacientes, codigo);

    if (indice == -1)
    {
        printf("Paciente não encontrado.\n");
        return;
    }
    if (indice >= 0)
    {
        for (int i = indice; i < *totalPacientes - 1; i++) 
        {
        pacientes[i] = pacientes[i + 1];
        }
        (*totalPacientes)--;
        printf("Paciente excluído com sucesso!\n");
    }
}

void listarIdade(Paciente pacientes[], int totalPacientes)
{
    if (totalPacientes == 0)
    {
        printf("Nenhum paciente listado por idade.\n");
        return;
    }

    // Criando cópia do array para ordenação
    Paciente copia[MAX_PACIENTES];
    memcpy(copia, pacientes, sizeof(Paciente) * totalPacientes);

    // Ordenar por idade (decrescente)
    for (int i = 0; i < totalPacientes - 1; i++)
    {
        for (int j = i + 1; j < totalPacientes; j++)
        {
            if (copia[i].idade < copia[j].idade)
            {
                Paciente temp = copia[i];
                copia[i] = copia[j];
                copia[j] = temp;
            }
        }
    }

    printf("===== LISTA DE PACIENTES POR IDADE (DECRESCENTE) =====\n");
    for (int i = 0; i < totalPacientes; i++)
    {
        printf("\n--- PACIENTE %d ---\n", i + 1);
        printf("Idade: %d\n", copia[i].idade);
        printf("Código: %d\n", copia[i].codigo);
        printf("Nome: %s\n", copia[i].nome);
        printf("Diagnóstico: %s\n", copia[i].diagnostico);
        if (copia[i].planoPaciente.ativo)
        {
            printf("Código do Plano: %d\n", copia[i].planoPaciente.codigoPlano);
            printf("Nome do Plano: %s\n", copia[i].planoPaciente.nomePlano);
            printf("Valor Mensal: %.2f\n", copia[i].planoPaciente.valorMensal);
        }
        else
        {
            printf("Nenhum plano ativo.\n");
        }
    }
}

void listarDiagnostico(Paciente pacientes[], int totalPacientes)
{
    if (totalPacientes == 0)
    {
        printf("Nenhum paciente listado por diagnóstico.\n");
        return;
    }

    printf("===== LISTA DE PACIENTES POR DIAGNÓSTICO =====\n");
    for (int i = 0; i < totalPacientes; i++)
    {
        printf("\nDiagnóstico: %s\n", pacientes[i].diagnostico);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("\nCódigo: %d\n", pacientes[i].codigo);
        printf("--- PLANO ---\n");
        if (pacientes[i].planoPaciente.ativo)
        {
            printf("Código do Plano: %d\n", pacientes[i].planoPaciente.codigoPlano);
            printf("Nome do Plano: %s\n", pacientes[i].planoPaciente.nomePlano);
            printf("Valor Mensal: %.2f\n", pacientes[i].planoPaciente.valorMensal);
        }
        else
        {
            printf("Nenhum plano ativo.\n");
        }
    }
}

void criarPlano(Paciente pacientes[], int totalPacientes)
{
    int codigoPaciente;
    printf("\nInforme o código do paciente para criar o plano: ");
    scanf("%d", &codigoPaciente);
    limparBuffer();

    int indice = pacienteExiste(pacientes, totalPacientes, codigoPaciente);

    printf("Buscando paciente");
    carregando();

    if (indice == -1)
    {
        printf("\nPaciente não encontrado!");
        return;
    }

    if (pacientes[indice].planoPaciente.ativo == 1)
    {
        printf("O paciente %s já possui um plano ativo (Plano: %s). Cancele o plano atual antes de criar um novo.\n",
               pacientes[indice].nome, pacientes[indice].planoPaciente.nomePlano);
        return;
    }

    printf("\n--- CRIAR PLANO PARA %s ---\n", pacientes[indice].nome);

    printf("Digite o código do plano: ");
    scanf("%d", &pacientes[indice].planoPaciente.codigoPlano);
    limparBuffer();

    printf("Digite o nome do plano: ");
    fgets(pacientes[indice].planoPaciente.nomePlano, sizeof(pacientes[indice].planoPaciente.nomePlano), stdin);
    pacientes[indice].planoPaciente.nomePlano[strcspn(pacientes[indice].planoPaciente.nomePlano, "\n")] = '\0';

    printf("Digite o valor mensal do plano: ");
    scanf("%f", &pacientes[indice].planoPaciente.valorMensal);
    limparBuffer();

    pacientes[indice].planoPaciente.ativo = 1; // Ativa o plano

    printf("\nPlano '%s' criado com sucesso para o paciente %s!\n",
           pacientes[indice].planoPaciente.nomePlano, pacientes[indice].nome);
}

void cancelarPlano(Paciente pacientes[], int totalPacientes)
{
    int codigoPaciente;
    printf("\nInforme o código do paciente para cancelar o plano: ");
    scanf("%d", &codigoPaciente);
    limparBuffer();

    int indice = pacienteExiste(pacientes, totalPacientes, codigoPaciente);

    printf("Buscando paciente");
    carregando();

    if (indice == -1)
    {
        printf("\nPaciente não encontrado!");
        return;
    }

    if (pacientes[indice].planoPaciente.ativo == 0)
    {
        printf("O paciente %s não possui nenhum plano ativo para ser cancelado.\n", pacientes[indice].nome);
        return;
    }

    printf("\n--- CANCELAR PLANO DE %s (Plano atual: %s) ---\n",
           pacientes[indice].nome, pacientes[indice].planoPaciente.nomePlano);

    // Reseta os dados do plano
    pacientes[indice].planoPaciente.ativo = 0;
    pacientes[indice].planoPaciente.codigoPlano = 0;
    strcpy(pacientes[indice].planoPaciente.nomePlano, "N/A");
    pacientes[indice].planoPaciente.valorMensal = 0.0;

    printf("\nPlano do paciente %s cancelado com sucesso!\n", pacientes[indice].nome);
}

int mostrarMenu() 
{
    int selecionarOpcao;

    printf("==== SISTEMA CADASTRO DE PACIENTE ====\n");
    printf("0 - Sair\n");
    printf("1 - Cadastrar paciente\n");
    printf("2 - Exibir paciente\n");
    printf("3 - Buscar paciente\n");
    printf("4 - Atualizar dados\n");
    printf("5 - Excluir paciente\n");
    printf("6 - Listar por idade\n");
    printf("7 - Listar por diagnóstico\n");
    printf("8 - Salvar dados do paciente\n");
    printf("9 - Criar plano para o paciente\n");
    printf("10 - Cancelar plano do paciente\n");
    scanf("%d", &selecionarOpcao);

    return selecionarOpcao;
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int opcao;
    Paciente pacientes[MAX_PACIENTES];
    int ids = 1001, totalPacientes = 0;
    
    // Carregando dados do arquivo 
    carregarDados(pacientes, &totalPacientes, &ids);

    do 
    {
        opcao = mostrarMenu();
        limparBuffer();

        system("cls"); // Limpa tela antes de ecibir a próxima opção

        switch (opcao) 
        {
        case 0:
            printf("Saindo do sistema.\n");
            carregando();
            break;
        
        case 1:
        {
            cadastrarPaciente(pacientes, &totalPacientes, &ids);
            break;
        }
        case 2:
        {
            exibirPaciente(pacientes, totalPacientes);
            break;
        }
        case 3:
        {
            buscarPaciente(pacientes, totalPacientes);
            break;
        }
        case 4:
        {
            atualizarDados(pacientes, totalPacientes);
            break;
        }
        case 5:
        {
            excluirPaciente(pacientes, &totalPacientes);
            break;
        }
        case 6:
        {
            listarIdade(pacientes, totalPacientes);
            break;
        }
        case 7:
        {
            listarDiagnostico(pacientes, totalPacientes);
            break;
        }
        case 8:
        {
            salvarDados(pacientes, totalPacientes);
            break;
        }
        case 9:
        {
            criarPlano(pacientes, totalPacientes);
            break;
        }
        case 10:
        {
            cancelarPlano(pacientes, totalPacientes);
            break;
        }
        default:
            printf("Opção não implementada ainda.\n");
            break;
        }
        Sleep(5000);
        system("cls");

    } while (opcao != 0);

    return 0;
}
