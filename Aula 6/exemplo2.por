programa 
{
  /*
    0 1 2 3

    t(n) = t(n - 1) + t( - 2)
  */
  funcao inicio() 
  {
    escreva(fibonacci(5))
  }

  funcao inteiro fibonacci(inteiro numero)
  {
    se (numero == 1)
    {
      retorne 0
    }
    se (numero == 2)
    {
      retorne 1
    }

    inteiro resultado = fibonacci(numero - 1) + fibonacci(numero - 2)

    retorne resultado
  }
}
