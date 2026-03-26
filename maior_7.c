//Ler um número e dizer se ele é ou não maior que 7
#include <stdio.h>
int main () {
//Declarar uma variavel float: o número é qualquer
    float x;
//Entrada do valor
printf("Digite um numero qualquer: ");
scanf("%f", &x);
//Processamento com verificação
if (x > 7) {
    printf("%.2f maior que 7\n", x);
}
else {
    printf("%.2f não e maior que 7\n", x);
}
    return 0;
}