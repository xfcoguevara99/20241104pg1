#include <stdio.h>

int main()
{
    float altura,largura,profundidade,area,volumen;
    printf("Entre como a altura(m): ");
    scanf("%f",&altura);
    printf("Entre como a largura(m): ");
    scanf("%f",&largura);
    printf("Entre como a profundidade(m): ");
    scanf("%f",&profundidade);
    area = 2*(altura*largura + altura*profundidade + profundidade*largura);
    volumen = altura * largura * profundidade;
    printf("A área é %g m2 e o volumen é %g m3.\n",area,volumen);
    return 0;

}