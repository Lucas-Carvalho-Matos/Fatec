//ler o valor de uma compra e o numero de parcelas(2,3,4). Calcular e mostrar o valor de cada parcela.
//Para outros valores, exibir mensagem de erro
//Para 3 parcelas calcular juros de 10% e 4 parcelas, 20%
#include<stdio.h> 
int main() {
    //declaração de variaveis
    float valor_compra, valor_parcela, juros;
    int parcelas;
    //entrada de dados
    printf("Digite o valor da compra: \n");
    scanf("%f", &valor_compra);
    printf("Digite o numero de parcelas: \n");
    scanf("%d", &parcelas);
    //estrutura condicional
    if (parcelas == 2) {
        valor_parcela = valor_compra / 2;
        printf("Serao 2 parcelas de R$ %.2f\n", valor_parcela);
    }
    else if (parcelas == 3){
        juros = 10.0 / 100 * valor_compra;
        valor_parcela = (valor_compra + juros) / 3;
        printf("Acrescimo = R$ %.2f\n", juros);
        printf("Serao 3 parcelas de R$ %.2f\n", valor_parcela);

    }
    else if (parcelas == 4){
        juros = 20.0 / 100 * valor_compra;
        valor_parcela = (valor_compra + juros) / 4;
        printf("Acrescimo = R$ %.2f\n", juros);
        printf("Serao 4 parcelas de R$ %2.f\n", valor_parcela);
    }
    else{
        printf("Quantidade de parcelas invalida\n");
    }
    return 0;
}
