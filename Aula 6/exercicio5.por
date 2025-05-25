programa
{
	
	funcao inicio()
	{
		inteiro N, par, impar, positivo, negativo, sequencia

		escreva("Digite um npumero: ")
		leia(N)

		sequencia = sequenciaNumero(par, impar, positivo, negativo)
	}

	funcao sequenciaNumero(inteiro N, inteiro par, inteiro impar, inteiro positivo, inteiro negativo)
	{
		se (N % 2 == 0)
		{
			par = par + 1
		}
		senao
		{
			impar = impar + 1
		}

		se (N > 0)
		{
			positivo = positivo + 1
		}
		senao 
		{
			negativo = negativo + 1
		}
		se (N == 0) 
		 {
        		escreva("Quantidade de pares: ", par, "\n")
       		        escreva("Quantidade de ímpares: ", impar, "\n")
        		escreva("Quantidade de positivos: ", positivo, "\n")
        		escreva("Quantidade de negativos: ", negativo, "\n")
    		 }

		sequenciaNumero(N, par, impar, positivo, negativo)
	}
}
