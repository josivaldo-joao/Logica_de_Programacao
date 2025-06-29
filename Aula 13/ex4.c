#include <stdio.h>

const char* classificarIMC(float peso, float altura) 
{
    float imc = peso / (altura * altura);

    if (imc < 18.5)
        return "Abaixo do peso";
    else if (imc < 25.0)
        return "Peso normal";
    else if (imc < 30.0)
        return "Sobrepeso";
    else if (imc < 35.0)
        return "Obesidade grau 1";
    else if (imc < 40.0)
        return "Obesidade grau 2";
    else
        return "Obesidade grau 3";
}

int main() 
{
    float peso, altura;

    printf("Peso: ");
    scanf("%f", &peso);
    printf("Altura: ");
    scanf("%f", &altura);

    const char* classificacao = classificarIMC(peso, altura);
    printf("Classificação: %s\n", classificacao);

    return 0;
}
