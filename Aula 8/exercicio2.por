programa 
{
  funcao inicio() 
  {
    inteiro numeros[3][3], maior = 0, menor

    para (inteiro i = 0; i < 3; i++)
    {
      para (inteiro j = 0; j < 3; j++)
      {
        escreva("Digite o valor da posição ","[", i, "][", j, "]: ")
        leia(numeros[i][j])


        se (i == 0 e j == 0) 
        {
          menor = numeros[i][j]
        }

        se (numeros[i][j] < menor) 
        {
          menor = numeros[i][j]
        }

        se (numeros[i][j] > maior)
        {
          maior = numeros[i][j]
        }
      }
    }
    escreva("O menor valor da matriz é: ", menor, "\n")
    escreva("O maior valor da matriz é: ", maior, "\n")
  }
}
