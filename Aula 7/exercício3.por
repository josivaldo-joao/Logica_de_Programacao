programa 
{
  funcao inicio() 
  {
    inteiro numeros[10], maior = 0, menor

    para (inteiro i = 0; i < 10; i++)
    {
      escreva("Digite o valor ", i + 1, ": ")
      leia(numeros[i])

      se (i == 0)
      {
        menor = numeros[i]
      }
      se (numeros[i] < menor)
      {
        menor = numeros[i]
      }
      se (numeros[i] > maior)
      {
        maior = numeros[i]
      }
    }
    escreva("O menor valor é: ", menor, "\n")
    escreva("O maior valor é: ", maior, "\n")
  }
}