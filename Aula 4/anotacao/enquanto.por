programa 
{ //Normalmente usamos o enquanto quando não sabe exatamente o laço iria repetir 
  funcao inicio() 
  {
    /*inteiro contador = 1

    enquanto (contador <= 100)
    {
      //incremento 
      escreva(contador, "\n")
      contador++
    }*/

    inteiro soma = 0

    enquanto (verdadeiro)
    {
      inteiro numero

      escreva("Digite um numero: ")
      leia(numero)

      se (numero == 0)
      {
        escreva("Saindo do laço...\n")
        pare
      }

      soma = soma + numero
    }

    escreva("Soma: ", soma)
  }
}
