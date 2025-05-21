programa 
{
  funcao inicio() 
  {
   contagem(0) 
  }
  funcao contagem(inteiro contador)
  {
    //caso base
    se (contador > 100)
    {
      escreva("Fim da contagem.\n")
    }
    senao
    {
    escreva(contador, "\n")
    contagem(contador + 1) //Passo Recursivo
    }

    // ou também pode ser
     /*se (contador > 100)
    {
      escreva("Fim da contagem.\n")
      retorne
    }
    escreva(contador, "\n")
    contagem(contador + 1) //Passo Recursivo
   */
    // Exemplo 2
    /*
    programa 
{
  funcao inicio() 
  {
   contagem(0) 
  }
  funcao contagem(inteiro contador)
  {
    //caso base
    se (contador > 100)
    {
      escreva("Fim da contagem.\n")
    }
    senao
    {
    escreva(contador, "\n")
    contagem(contador + 1) //Passo Recursivo
    escreva("Blabla")
    }*/
  }
}
