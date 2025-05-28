programa 
{
  funcao inicio() 
  {
    inteiro numeros[3][3] = 
    {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
    }
  }
    funcao dobrar(inteiro numeros[][], inteiro linha, inteiro coluna)
    {
      para (inteiro i = 0; i < linha; i++)
      {
        para (inteiro j = 0; j < coluna; j++)
        {
          numeros[i][j] = numeros[i][j] * 2
        }
    }
}
