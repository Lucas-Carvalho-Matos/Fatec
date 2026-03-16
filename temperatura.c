//ler uma uma temperatura em graus Celsius e transformar para 
//Fahrenheit: f = 9/5 * c + 32
#include <stdio.h>
float c, f; //declaração de variaveis. 
int main (){
    printf("Digite a temperatura em graus Celsios: ");
    scanf("%f", &c); // entrada de dados
    f = 9.0 / 5.0 * c + 32; //processamento
    printf ("%f celsios correspondem a %f Fahrenheit\n", c, f);

    return 0;
}