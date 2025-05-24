programa {

  funcao inicio() 
  {
    inteiro N

    escreva("Informe o valor de N: ")
    leia(N)

    contagem(N, 1)
  }

  funcao vazio contagem(inteiro N_Atual, inteiro N_Limite) 
  {
    se (N_Atual < N_Limite) 
    {
      retorne
    }

    escreva("Números de 1 até ", N_Atual, "\n")
    contagem(N_Atual - 1, N_Limite) 
  }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 118; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */