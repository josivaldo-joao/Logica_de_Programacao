programa 
{
  // 1 fatorial(5): n = 5; 5 * fatorial(4) || resultado = 120
  funcao inicio() 
  {
    escreva(fatorial(5))  
  }
  funcao inteiro fatorial(inteiro numero)
  {
    se (numero == 0 ou numero == 1)
    {
      retorne 1
    }

      inteiro resultado = numero * fatorial(numero - 1)

      retorne resultado
  }
}
