#include <stdio.h>
#define salario 2000
#define meta 10000
 int main(){
    float vendas,remuneracao;
    int avaliacao;
    printf("Entre com o total de vendas (R$): ");
    scanf("%f",&vendas);
    printf("Entre com o total de a avaliacao de desempenho (1-10): ");
    scanf("%d",&avaliacao);
    if (vendas >= meta)
    {
      remuneracao= salario + (vendas * 0.07);
    } else {
        remuneracao = salario + (vendas * 0.05);
    }   
    if (avaliacao > 8)
    {
        remuneracao += 500;
    }
    printf("Remuneracao: %.2f\n",remuneracao);
    






    return 0;
 }