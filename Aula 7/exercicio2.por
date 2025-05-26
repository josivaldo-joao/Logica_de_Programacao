programa 
{
  funcao inicio() 
  {
    inteiro valores[10]

    para (inteiro i = 0; i < 10; i++)
    {
      escreva("Digite o valor ", i + 1, ": ")
      leia(valores[i])
    }
    escreva("Valores na ordem inversa: ")
    para (inteiro i = 9; i >= 0; i--)
    {
      escreva("\n", valores[i])
    }
  }
}
