programa
{
	
	funcao inicio()
	{
		inteiro N, S

		escreva("Informe o valor de N: ")
		leia(N)

		S = somaNaturais(N)
		escreva("A soma dos ", N, " primeiros naturais é ", S)
	}
	funcao inteiro somaNaturais(inteiro N)
	{
		retorne (N * (N + 1)) / 2
	
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 107; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */