programa 
{
  funcao inicio() 
  {
    //numeros: [1][2][3][4][5]
    inteiro numeros[5]

    /*numeros[0] = 1
    numeros[1] = 2
    numeros[2] = 3
    numeros[3] = 4
    numeros[4] = 5*/

    /*inteiro numero 
    escreva("Digite um número: ")
    leia(numero)*/

    para (inteiro i = 0; i < 5; i++)
    {
      inteiro numero
      escreva("Digite um número: ")
      leia(numero)
      numeros[i] = numero

      // ou também podemos escrever assim
      /*inteiro numero
      escreva("Digite um número: ")
      leia(numero[i])*/
    }
    para (inteiro i = 0; i < 5; i++) 
    {
        escreva(numeros[i], " ")
    }
    
    // o array não pode conter números negativos e não pode chamar números que não estão em array
    escreva("numeros[0] = ", numeros[0], "\n")
    escreva("numeros[0] = ", numeros[1], "\n")
    escreva("numeros[0] = ", numeros[2], "\n")
    escreva("numeros[0] = ", numeros[3], "\n")
    escreva("numeros[0] = ", numeros[4], "\n")
  }
}
