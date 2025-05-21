programa
{
	inclua biblioteca Util --> u
	funcao inicio()
	{
		inteiro opcao

		faca
		{
      escreva("===== SISTEMA BANCÁRIO =====\n")
      escreva("0 - Sair\n")
      escreva("1 - Criar Conta\n")
      escreva("2 - Exibir Contas\n")
      escreva("3 - Depositar\n")
      escreva("4 - Sacara\n")
      escreva("5 - Buscar Conta\n")
      escreva("=============================\n")
      escreva("Escolha uma opção: ")
      leia(opcao)

      escolha (opcao)
      {
        caso 0:
          escreva("Opção 0: Saindo do sistema...\n")
        pare

        caso 1:
              escreva("Opcao 1: Opção Criar Conta selecionada.\n")
            pare
      
        caso 2:
          escreva("Opção 2: Opção Exibir Contas selecionada.\n")
        pare 

        caso 3: 
          escreva("Opção 3: Opção Depositar selecionada.\n")
        pare

        caso 4:
          escreva("Opção 4: Opção Sacar selecionada.\n")
        pare

        caso 5: 
          escreva("Opção 5:  Buscar Conta selecionada.\n")
        pare

        caso contrario: 
          escreva("Opção inválida. Tente novamente.")
      }
      u.aguarde(3000)
      limpa()
		}
		enquanto (opcao != 0)
	}
}
