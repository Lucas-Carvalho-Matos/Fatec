//ler altura (em m) e peso (em kg)
// calcular e mostrar o imc = peso / (altura ^ 2);
#include <stdio.h>
int main () {
    //declaração de variaveis
    float altura, peso, imc;
    printf("Escreva a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso em Kg: ");
    scanf("%f", &peso);
    //processamento
    imc = peso / (altura * altura);
    //saida
    printf ("imc = %f", imc);
    return 0;
}