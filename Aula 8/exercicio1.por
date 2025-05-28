programa 
{
  funcao inicio() 
  {
    inteiro numeros[3][3], soma = 0

    para (inteiro i = 0; i < 3; i++)
    {
      para (inteiro j = 0; j < 3; j++)
      {
        inteiro numero
        escreva("Digite o valor da posição ","[", i, "][", j, "]: ")
        leia(numero)
        numeros[i][j] = numero

        soma = soma + numero
      }
    }
    escreva("A soma de todos os valores da matriz é: ", soma)
  }
}
