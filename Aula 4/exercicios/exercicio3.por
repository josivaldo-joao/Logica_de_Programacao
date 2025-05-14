programa 
{
  funcao inicio() 
  {
    inteiro positivo = 0, negativo = 0

    enquanto(verdadeiro)
    {
      inteiro numero
      escreva("Digite um número:  ")
      leia(numero)

      se (numero > 0)
      {
        positivo++
      }
      senao se (numero < 0)
      {
        negativo++
      }
      senao
      {
        pare
      }
    }
     escreva("Quantidade de números positivos: ", positivo, "\n")
     escreva("Quantidade de números negativos: ", negativo, "\n")
  }
}
