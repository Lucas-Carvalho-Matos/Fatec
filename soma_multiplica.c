// ler 3 numeros; multiplicar os 3º pela soma dos dois primeiros
//exibir o resultado final 
#include <stdio.h>
int main () {
//declaração de variáveis
float numero1, numero2, numero3, resultado;
//entrada de valores
printf("Escreva um numero ");
scanf("%f", &numero1);
printf("Escreva outro numero ");
scanf("%f", &numero2);
printf("Digite o terceiro valor ");
scanf("%f", &numero3);
//processamento
resultado = numero3 * (numero1 * numero2);
//saida
printf("resultado = %f", resultado);
}