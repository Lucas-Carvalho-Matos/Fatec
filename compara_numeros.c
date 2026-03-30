//ler dois números quaisquer, dizer se são iguais, se o primeiro é o maior ou se o segundo é maior.
#include <stdio.h>
int main () {
    //Declarando variaveis
    float numero1, numero2;
    //Entrada de dados
    printf ("digite dois numero: \n");
    scanf("%f%f" , &numero1, &numero2);
    //Estrutura condicional
    if (numero1 > numero2) {
        printf("%.2f e maior que %.2f\n", numero1, numero2);
    }
    else if (numero1 == numero2){
        printf("%.2f igual a %.2f\n", numero2, numero1);
    }
    else {
        printf("%.2f e maior que %.2f\n", numero2, numero1);
    }
    return 0;
}