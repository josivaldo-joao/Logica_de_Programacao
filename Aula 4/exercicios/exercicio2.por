programa 
{
  funcao inicio() 
  {
    inteiro N, soma = 0

    escreva("Digite um número: ")  
    leia(N)

    para (inteiro contador = 1; contador <= N; contador ++)
    {
      se (contador % 2 == 0)
      {
        soma = soma + contador
      }
    }
    escreva("A soma dos números pares de 1 até ", N, " é: ", soma)
  }
}
