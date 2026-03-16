#include <stdio.h>

int main () {
    //declaração de variáveis
    float numero1, numero2, soma;
    //entrada de dados
    printf("digite o primeiro numero ");
    scanf ("%f", &numero1);
    printf("Digite o segundo numero ");
    scanf("%f", &numero2);
    //processamento
    soma = numero1 + numero2;
    //saída
    printf ("soma = %f\n", soma);
    return 0;
}