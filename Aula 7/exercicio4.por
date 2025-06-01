programa 
{
  funcao inicio() 
  {
    inteiro acimaMedia = 0
    real notas[10], somaNotas = 0, media
    real notasAcima[10]

    para (inteiro i = 0; i < 10; i++)
    {
      escreva("Digite nota do aluno ", i + 1, ": ")
      leia(notas[i])

      somaNotas = somaNotas + notas[i]
    }
    media = somaNotas / 10

    para (inteiro i = 0; i < 10; i++)
    {
      se (notas[i] >= media)
      {
        acimaMedia++
      }
    }
    inteiro contador = 0
    para (inteiro i = 0; i < 10; i++)
    {
      se (notas[i] > media)
      {
        notasAcima[contador] = notas[i]
        contador++
      }
    }
    escreva("A média foi: ", media, "\n")
    escreva("Quantidade de notas acima da média: ", acimaMedia, "\n")
    escreva("Notas que estão acima da média:\n")

    para (inteiro i = 0; i < contador; i++)
    {
      escreva("- ", notasAcima[i], "\n")
    }
  }
}
