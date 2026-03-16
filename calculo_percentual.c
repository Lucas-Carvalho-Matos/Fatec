//Ler um valor e um percentual, calcular e exibir o percentual do valor
#include <stdio.h>
int main () {
    //delclara variáveis
    float valor, percentual, resultado;
    //entrada de dados
    printf("digite o valor: ");
    scanf("%f", &valor);
    printf("digite o percentual: ");
    scanf("%f", &percentual);
    //processamento

   resultado = percentual /100 * valor;

   //sainda
   printf("%.2f%% de %.2f = %.2f\n", percentual, valor, resultado);
}