programa 
{
    funcao inicio()
    {
        real pH
        
        escreva("Digite o valor de pH ou digite -1 para sair: ")
        leia(pH)
        
        enquanto (pH != -1)
        {
            se (pH < 7)
            {
                escreva("Substância Ácida\n")
            }
            senao se (pH > 7)
            {
                escreva("Substância Básica\n")
            }
            senao
            {
                escreva("Substância Neutra\n")
            }
            
            escreva("Digite o valor de pH (ou -1 para sair): ")
            leia(pH)
        }
    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 487; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */