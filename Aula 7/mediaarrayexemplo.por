programa 
{
  funcao inicio() 
  {
    inteiro qtdNotas, acimaMedia = 0
    real notas[5], somaNotas = 0, media

    escreva("Quantidade de notas: ")
    leia(qtdNotas)

    para (inteiro i = 0; i < qtdNotas; i++)
    {
      escreva("Digite a nota: ")
      leia(notas[i])
      somaNotas = somaNotas + notas[i]

    }
    media = somaNotas / qtdNotas

    para (inteiro i = 0; i < qtdNotas; i++)
    {
      se (notas[i] >= media)
      {
        acimaMedia++
      }
    }
    escreva("A média foi: ", media, "\n")
    escreva("Notas acima da média: ", acimaMedia, "\n")
  }
}
