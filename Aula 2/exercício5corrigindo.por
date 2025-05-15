programa 
{
  inclua biblioteca Matematica --> mat
  
  funcao inicio() 
  {
    real precoProduto, precoDesconto, comissaoAVista, comissaoParcelado, parcela

    escreva("Digite o preco do Produto: ")
    leia(precoProduto)
    

    precoDesconto = precoProduto * 0.9
    escreva("Valor com 10% de desconto: R$ ", mat.arredondar(precoDesconto, 2),"\n")

    parcela = precoProduto / 3.0
    escreva("Valor de cada parcela (3x sem juros): R$ ", parcela, "\n")
    
    comissaoAVista = precoDesconto * 0.05
    escreva("Comissão do vendedor (à vista): R$ ", comissaoAVista, "\n")
    
    comissaoParcelado = precoProduto * 0.05
    escreva("Comissão do vendedor (parcelado): R$ ", comissaoParcelado, "\n")
  }
}
