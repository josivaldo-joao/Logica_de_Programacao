programa 
{
  funcao inicio() 
  {
    inteiro ano_nasc, ano_atual, idade

    escreva("Digite o ano de nascimento: ")
    leia(ano_nasc)

    escreva("Digite o ao atual: ")
    leia(ano_atual)

    idade = ano_atual - ano_nasc

    se (idade >= 18)
    {
      escreva("Você completa ", idade, " anos em ", ano_atual, " e poderá tirar a habilitação.")
    }
    senao se(idade < 18)
    {
      escreva("Você completa ", idade, " anos em ", ano_atual, " e ainda não poderá tirar a habilitação.")
    }
  }
}
