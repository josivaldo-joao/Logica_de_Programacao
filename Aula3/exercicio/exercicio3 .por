programa 
{
  funcao inicio() 
  {
    inteiro opcao, num1, num2

    escreva("Digite o primeiro número: ")
    leia(num1)
    escreva("Digite o segundo número: ")
    leia(num2)

    escreva("1 - Soma\n")
    escreva("2 - Subtração\n")
    escreva("3 - Multiplicação\n")
    escreva("4 - Divisão\n")

    escreva("Escolha uma opção: ")
    leia(opcao)

    escolha (opcao)
    {
      caso 1: 
        escreva("Resultado da soma: ", num1 + num2)
        pare
      caso 2: 
        escreva("Resultado da subtração: ", num1 - num2)
        pare
      caso 3:
        escreva("Resultdo da multiplicação: ", num1 * num2)
        pare
      caso 4: 
        escreva("Resultado da divisão: ", num1 / num2)
        /*se (num1 / num2 == 0)
        {
          escreva("Divisão inválida!")
        }*/
        pare
      caso contrario:
        escreva("Número inválido!")
    }

  }
}
