#include <stdio.h>

void calcular(float num1, float num2, float *soma, float *multiplicar)
{
    *soma = num1 + num2;

    *multiplicar = num1 * num2; 
}
int main()
{
    float num1, num2;
    float resultadoSoma, resultadoMultiplicacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    calcular(num1, num2, &resultadoSoma, &resultadoMultiplicacao);

    printf("Soma: %.2f\n", resultadoSoma);

    printf("Multiplicacao: %.2f\n", resultadoMultiplicacao);
    
    return 0;
}
