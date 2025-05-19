programa 
{
  funcao inicio() 
  {
    real base, altura

    escreva("Digite a base do retângulo: ")
    leia(base)
    escreva("Digite a altura do retângulo: ")
    leia(altura)

    real area =  calcularAreaRetangulo(base, altura)
    escreva("Área do retângulo: ", area)
  }
  funcao real calcularAreaRetangulo(real base, real altura)
  {
    retorne base * altura
  }
}
