programa
{

	inclua biblioteca Util --> u
	
	funcao inicio()
	{
		 inteiro opcao
        
        faca
        {
            opcao = mostrarMenu()
            
            escolha (opcao)
            {
                caso 0:
                    escreva("Saindo do sistema...\n")
                pare
                
                caso 1:
                    criarConta()
                pare
                
                caso 2:
                    exibirContas()
                pare
                
                caso 3:
                    depositar()
                pare
                
                caso 4:
                    sacar()
                pare
                
                caso 5:
                    buscarConta()
                pare
                
                caso contrario:
                    escreva("Opção inválida. Tente novamente.\n")
            }
            u.aguarde(3000)
            limpa()
        }
        enquanto (opcao != 0)
	}
	funcao inteiro mostrarMenu()
	{
		inteiro selecionarOpcao
		
		escreva("===== SISTEMA BANCÁRIO =====\n")
      	escreva("0 - Sair\n")
      	escreva("1 - Criar Conta\n")
     	escreva("2 - Exibir Contas\n")
      	escreva("3 - Depositar\n")
      	escreva("4 - Sacar\n")
     	escreva("5 - Buscar Conta\n")
     	escreva("=============================\n")
      	escreva("Escolha uma opção: ")
      	leia(selecionarOpcao)

      	retorne selecionarOpcao
	}
	funcao vazio criarConta()
    {
        escreva("Opção Criar Conta selecionada.\n")
    }
    
    funcao vazio exibirContas()
    {
        escreva("Opção Exibir Contas selecionada.\n")
    }
    funcao vazio depositar()
    {
    	   escreva("Opção Depositar selecionada.\n")
    }
    funcao vazio sacar()
    {
    	   escreva("Opção Sacar selecionada.\n")
    }
    funcao vazio buscarConta()
    {
        escreva("Opção Buscar Conta selecionada.\n")
    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1454; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */