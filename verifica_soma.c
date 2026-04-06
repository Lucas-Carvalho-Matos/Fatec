// ler três numeros positivos; verificar se o maior é menor que a soma dos outros dois.
#include <stdio.h>
int main () {
    //declara 3 numeros
    int primeiro, segundo, terceiro;
    //declara soma e maior
    int soma, maior;
    printf("digite tres numeros:\n");
    scanf("%d%d%d", &primeiro, &segundo, &terceiro);
    if (primeiro > 0 && segundo > 0 && terceiro > 0) {
        if(primeiro >= segundo && primeiro >= terceiro) {
            maior = primeiro;
            soma = segundo + terceiro;
        }
        else if(segundo >= terceiro) {
            maior = segundo;
            soma = primeiro + terceiro;
        }
        else {
            maior = terceiro;
            soma = primeiro + segundo;
        }
        if (maior < soma) {
            printf("o maior e menor que a soma dos outros dois");
        }
        else{
            printf ("o maior não é menor que a soma dos outros dois");

        }
    }
    else {
        printf("valores invalidos\n");
    }
    return 0;
}