programa 
{
  funcao inicio() 
  {
    inteiro ano

    escreva("Digite um ano: ")
    leia(ano)

    se (ehBissexto(ano))
    {
      escreva(ano, " é um ano bissexto.")
    }
    senao
    {
      escreva(ano, " não é um ano bissexto.")
    }
  }

    funcao logico ehBissexto(inteiro ano)
    {
      retorne (ano % 4 == 0) e (ano % 100 != 0) ou  (ano % 400 == 0)
    }
}
