programa {
  funcao inicio() {
    inteiro qtdNumeros, qtdPares = 0, qtdImpares = 0, soma = 0

    escreva("Quantos números você quer digitar ? ")
    leia(qtdNumeros)

    para (inteiro contador = 0; contador < qtdNumeros; contador++)
    {
      inteiro numero

      escreva("Digite um número: ")
      leia(numero)

      soma += numero

      se (numero % 2 == 0)
      {
        qtdPares++
      }
      senao
      {
        qtdImpares++
      }
    }

      escreva("Pares: ", qtdPares, "\n")
      escreva("Impares: ", qtdImpares, "\n")
      escreva("Soma: ", soma, "\n")
  }
}
