//Ler o valor da compra e o percentual de desconto
//calcular e exibir o desconto e o valor final da compra
#include <stdio.h>
int main(){
    //declara variáveis
    float valor_compra, percentual_desconto, valor_desconto, valor_final;
    //entrada de dados
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    printf("Digite o valor da porcentagem" );
    scanf("%f", &percentual_desconto);
    //processamento
    valor_desconto = percentual_desconto /100  * valor_desconto;
    valor_final = valor_compra - valor_desconto;
    //saída
    printf("o total com %.2f% de desconto é; %.2f", valor_desconto, valor_final);

    return 0;
}