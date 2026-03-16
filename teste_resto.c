// ler dois números inteiros, calcular e mostrar o resto da divisão do primeiro pelo segundo
#include <stdio.h> 
int main() {
// declarar as variáveis
int numero1, numero2, resto;
//entrada de dados
printf("Digite o primeiro numero ");
scanf("%d", &numero1);
printf("Digite o segundo numero ");
scanf("%d", &numero2);
// processamento
resto = numero1 % numero2;
// saída
printf("o resto de %d por %d e %d\n", numero1, numero2, resto);
    return 0; 
}