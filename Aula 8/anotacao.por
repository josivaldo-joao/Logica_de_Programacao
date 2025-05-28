programa 
{
  funcao inicio() 
  {/*Matriz 2 linhas e 2 colunas
      0 1
    0[1][2]
    1[3][4]
  */
    inteiro numeros[3][3], soma = 0

    /*numeros[0][0] = 1
    numeros[0][1] = 2
    numeros[1][0] = 3
    numeros[1][1] = 4*/

    // Laço lendo a primeira linha 
    // Aqui esse primeiro para executa 3 vezes
    para (inteiro i = 0; i < 3; i++)
    {
      // Esse para também executa 3 vezes 
      para (inteiro j = 0; j < 3; j++)
      {
        inteiro numero 
        escreva("Digite um número: ")
        //escreva("[", i, "][", j, "]\n")
        leia(numero)
        numeros[i][j] = numero

        soma = soma + numero
      }
    }
     escreva("A soma de todos os valores da matriz é: ", soma)
  }
}
