programa 
{
  funcao inicio() 
  {
    inteiro valor_inicial, valor_final

    escreva("Digite o valor inicial: ")
    leia(valor_inicial)
    escreva("Digite o valor final: ")
    leia(valor_final)

    para (inteiro contador = valor_inicial; contador <= valor_final; contador++) {
      escreva(contador, "\n")
    }
  }
}
