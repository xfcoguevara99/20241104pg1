#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    float frecuencia,media,nota_1,nota_2,prova_total_1,prova_1a,prova_1b,recuperacao_1,prova_2,recuperacao_2;
    int conceito_final;
    bool aprovado;
    printf("Entre com P1 e R1: ");
    scanf("%f",&prova_1a);
    scanf("%f",&prova_1b);
    scanf("%f",&recuperacao_1);
    printf("Entre com P2 e R2: ");
    scanf("%f",&prova_2);
    scanf("%f",&recuperacao_2);
    printf("Entre com a frecuencia (em %%): ");
    scanf("%f",&frecuencia);
    prova_total_1 = prova_1a + prova_1b;
    nota_1 = fmax(prova_total_1,recuperacao_1);
    nota_2 = fmax(prova_2,recuperacao_2);
    media = (nota_1 + nota_2)/2;
    conceito_final = round(media);
    aprovado = (conceito_final >= 6) && (frecuencia >= 75);
    printf("Media: %.1f\n",media);
    printf("Resultado final: %d\n",conceito_final);
    printf("Situação: %d\n",aprovado);
    return 0;
}