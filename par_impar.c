//Ler um número inteiro e verificar se ele é par ou ímpar.
#include <stdio.h>
int main () {
//declara variaveis
int numero;
printf("Digite um numero inteiro: ");
scanf("%d", &numero);
//processamento com a verificação
int resto = numero % 2;
if(resto == 0){
printf("%d e par\n", numero);
}
else{ 
    printf("%d é impar\n", numero);
}
return 0;
};