#include <stdio.h>
int main()
{
    float altura,largura,profundidade,area,volumen,custo_por_metro2,custo_total;
    int quantidade_caixas;
    printf("Entre como a altura(m): ");
    scanf("%f",&altura);
    printf("Entre como a largura(m): ");
    scanf("%f",&largura);
    printf("Entre como a profundidade(m): ");
    scanf("%f",&profundidade);
    area = 2*(altura*largura + altura*profundidade + profundidade*largura);
    volumen = altura * largura * profundidade;
    printf("A area e %g m2 e o volumen e %g m3.\n",area,volumen);
    printf("Entre com a Quantidade de caixas: ");
    scanf("%d",&quantidade_caixas);
    printf("Entre com o custo de producao: ");
    scanf("%f",&custo_por_metro2);
    custo_total = quantidade_caixas * area * custo_por_metro2;
    printf("Custo total: %.2f\n",custo_total);
    return 0;
}