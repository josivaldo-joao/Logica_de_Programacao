programa 
{
  funcao inicio() 
  {
    cadeia nome
    inteiro idade

    escreva("Digite o seu nome: ")
    leia(nome)
    escreva("Digite sua idade: ")
    leia(idade)

    nomeAleatorio(nome, idade)
  }
  funcao vazio nomeAleatorio(cadeia nome, inteiro idade)
  {
    escreva("Olá, ", nome, " Você tem ", idade, " anos. Seja bem-vindo(a)!")
  }
}
