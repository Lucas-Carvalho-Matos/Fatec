// ler o valor da compra e uma opção: 1 - a vista ou 2 - a prazo
// se opção a vista, perguntar: 1 - pix (10% de desconto) 2 - débito (5% de desconto)
// se opção a prazo, perguntar: 2 parcelas (sem acrescimo) ou 3 parcelas (5% de acrescimo)
// exibir todas as respostas
#include <stdio.h>
int main()
{
    // declara variavel
    float v_compra;
    int opcao;
    printf("Digite o valor da compra: \n");
    scanf("%f", &v_compra);
    printf("digite\n1 - a vista\n2 - a prazo\n--> ");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        printf("Digite\n1 - pix\n2 - Debito\n --> ");
        int forma; // variavel local do if
        scanf("%d", &forma);
        if (forma == 1)
        {
            float desconto = 10.0 / 100 * v_compra;
            float v_final = v_compra - desconto;
            printf("desconto = R$ %.2f\nvalor final = R$ %.2f",
                   desconto, v_final);
        }
        else if (forma == 2)
        {
            float desconto = 5.0 / 100 * v_compra;
            float v_final = v_compra - desconto;
            printf("desconto = R$ %.2f\nvalor final = R$ %.2f", desconto, v_final);
        }
        else
        {
            printf("forma de pagamento invalida");
        }
    }
    else if (opcao == 2)
    {
        printf("Digite o numero de parcelas (2/3): ");
        int parcelas;
        scanf("%d", &parcelas);
        if (parcelas == 2)
        {
            printf("valor de cada parcela = R$ %.2f", v_compra / 2);
        }
        else if (parcelas == 3)
        {
            float acrescimo = 5.0 / 100 * v_compra;
            float v_final = v_compra + acrescimo;
            printf("Acrescimo = R$ %.2f\nValor final = R$%.2f\n", acrescimo, v_final);
            float v_parcela = v_final / 3;
            printf("Valor de cada parcela = R$.2f\n", v_parcela);
        }
        else
        {
            printf("numeros de parcelas invalido");
        }
    }
    return 0;
}