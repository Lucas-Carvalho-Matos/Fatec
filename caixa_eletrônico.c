#include <stdio.h>
int main (){
    //declara variaveis
    int saque, notas50, notas20, notas10, notas5, notas2, resto;
    //entrada de dados
    printf("Digite o valor do saque ");
    scanf("%d", &saque);
    //processamento
    notas50 = saque / 50;
    resto = saque % 50;
    notas20 = resto / 20;
    resto = resto % 20;
    notas10 = resto / 10;
    resto = resto % 10;
    notas5 = resto / 5;
    resto = resto % 5;
    notas2 = resto / 2;
    resto = resto % 2;

    //saída
    printf("notas de 50: %d\nnotas de 20: %d\nnotas de 10: %d\nnotas de 5: %d\nnotas de 2: %d", notas50, notas20, notas10, notas5, notas2);
    return 0;
}