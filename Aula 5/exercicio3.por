programa 
{
  funcao inicio() 
  {
    real nota1, nota2, media
    inteiro faltas
    
    escreva("Digite a primeira nota: ")  
    leia(nota1)
    escreva("Digite a segunda nota: ")
    leia(nota2)
    escreva("Quantidades de faltas: ")
    leia(faltas)

    media = calcularMedia(nota1, nota2)
    exibirResultado(media, faltas)
  }
   
   funcao real calcularMedia(real nota1, real nota2) 
    {
      retorne (nota1 + nota2) / 2
    }

    funcao exibirResultado(real media, inteiro faltas)
    {
       escreva("Média: ", media, "\n")
       escreva("Faltas: ", faltas, "\n")

       se (media >= 9.5 e faltas <= 10) 
      {
        escreva("Situação: APROVADO COM LOUVOR")  
      }
      senao se (media >= 7.0 e faltas <= 10)
      {
        escreva("Situação: APROVADO")
      }
      senao
      {
        escreva("REPROVADO")
      }
    }
    
}
