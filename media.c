//ler duas notas, calcular e exibir a média; se media >= 6.0, exibir aprovado
//se não exibir reprovado
#include<stdio.h>
int main () {
//declara variáveis
float nota1, nota2, media;
//entrada de dados, as notas
printf("Digite a nota 1: ");
scanf("%f", &nota1);
printf("Digite a nota 2: ");
scanf ("%f", &nota2);
//processamento
media = (nota1 + nota2) / 2;
//verificação da média para saída
if (media >= 6.0) {
    printf ("media = %2.f, voce esta aprovado", media);
} 
    else {
        printf ("media = %2.f, voce esta reprovado", media);
    }
    return 0;
}