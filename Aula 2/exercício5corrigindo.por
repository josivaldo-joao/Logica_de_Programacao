programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    real precoProduto, precoDesconto, comissaoAVista, comissaoParcelado

    leia(precoDesconto)

    precoDesconto = precoDesconto * 0.9

    escreva("Desconto: R$ ", mat.arredondar(precoDesconto, 2))

    comissaoAVista = precoDesconto * 0.05
    comissaoParcelado = precoProduto * 0.05
  }
}
