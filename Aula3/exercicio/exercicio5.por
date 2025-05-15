programa
{
	
	funcao inicio()
	{
		real nota1, nota2, nota3, media
		inteiro acimaMedia = 0
		
		escreva("Digite a primeira nota: ")
		leia(nota1)
		
		escreva("Digite a segunda nota: ")
		leia(nota2)
		
		escreva("Digite a terceira nota: ")
		leia(nota3)

		media = (nota1 + nota2 + nota3) / 3
		escreva("A média das notas é: ", media, "\n")

		
		
		se (nota1 > media)
		{
			acimaMedia = acimaMedia + 1
		}
		se (nota2 > media)
		{
			acimaMedia = acimaMedia + 1
		}
		se (nota3 > media)
		{
			acimaMedia = acimaMedia + 1
		}
		escreva("Quantas notas estão acima da média: ", acimaMedia)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 472; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */