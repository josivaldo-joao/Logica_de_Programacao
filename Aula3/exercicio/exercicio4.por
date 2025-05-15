programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		real peso, altura, imc

		escreva("Digite o seu peso (kg): ")
		leia(peso)
		escreva("Digite a sua altura (m): ")
		leia(altura)

		imc = mat.arredondar(peso / (altura * altura), 2)

		// escreva("imc= ", imc)

		se (imc < 18.5)
		{
			escreva("Seu IMC é: ", imc, "Você está abaixo do peso.")
		}
		senao se (imc >= 18.5 e imc <= 24.9)
		{
			escreva("Seu IMC é: ", imc, "Você tem peso normal.")
		}
		senao se (imc >= 25 e imc <= 29.9)
		{
			escreva("Seu IMC é: ", imc, "Você está com sobrepeso.")	
		}
		senao se (imc >= 30 e imc <= 34.9)
		{
			escreva("Seu IMC é: ", imc, "Você tem obesidade grau 1")
		}
		senao se (imc >= 35 e imc <= 39.9)
		{
			escreva("Seu IMC é: ", imc, "Você tem obesidade grau 2")
		}
		senao se (imc >= 40)
		{
			escreva("Seu IMC é: ", imc, "Você tem obesidade grau 3")
		}
	}	
	
		
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 281; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */