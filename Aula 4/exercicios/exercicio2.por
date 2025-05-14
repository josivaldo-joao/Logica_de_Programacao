//Crie um programa em Portugol que leia um número inteiro N e calcule a soma de todos os números pares de 1 até N. 
//O programa deve utilizar um laço de repetição para percorrer os números de 1 até N, somando apenas os números pares.

programa 
{
  funcao inicio() 
  {
    inteiro N, soma = 0

    escreva("Digite um número: ")  
    leia(N)

    para (inteiro contador = 1; contador <= N; contador ++)
    {
      se (contador % 2 == 0)
      {
        soma = soma + contador
      }
    }
    escreva("A soma dos números pares de 1 até ", N, " é: ", soma)
  }
}
