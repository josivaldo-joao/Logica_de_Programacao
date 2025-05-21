programa 
{
  /*
    2 chamada: n = 1; escreva(1); imprimir(2) || escreva(1)
    1 chamada: n = 0; escreva(0); imprimir(!) || escreva(0)
  */
  funcao inicio() 
  {
    imprimir(0)
  }
  funcao imprimir(inteiro numero)
  {
    se (numero == 5)
    {
      escreva(numero, " ")
    }
    senao
    {
      escreva(numero, " ")
      imprimir(numero + 1)// imprime de 1 até 5
      escreva(numero, " ")// imprime de 4 até 1
    }
  }
}
