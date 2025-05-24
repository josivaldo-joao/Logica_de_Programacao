programa
{
	
	funcao inicio()
	{
		inteiro a, b, S

		escreva("Informe o valor de a: ")
		leia(a)
		escreva("Informe o valor de b: ")
		leia(b)

		S = produto(a, b)
		escreva("O produto é ", S)
	}
	funcao inteiro produto(inteiro a, inteiro b)
	{
		se (b == 0 )
			retorne 0
		senao
			retorne a + produto(a, b - 1)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 323; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */