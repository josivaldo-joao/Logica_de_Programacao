programa 
{
  funcao inicio() 
  {
    inteiro valores[10], soma = 0

    para (inteiro i = 0; i < 10; i++)
    {
      escreva("Digite o valor ", i + 1, ": ")
      leia(valores[i])

      soma = soma + valores[i]
    }
    escreva("A soma de todos os valores é: ", soma, "\n")
  }
}
