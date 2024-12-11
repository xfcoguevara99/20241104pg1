#include <stdio.h>


int main()
{
    float venda,comissao;
    printf("Entre com o valor negociado: ");
    scanf("%f",&venda);
    if (venda < 2500)
    {
        comissao = 30 + 1.7*venda/100;
    }else if(venda < 6250)
    {
        comissao = 56 + 0.66*venda/100;
    }else if(venda < 20000)
    {
        comissao = 76 + 0.34*venda/100;
    }else if(venda<50000)
    {
        comissao = 100 + 0.22*venda/100;
    }else if(venda < 500000)
    {
        comissao = 155 + 0.11*venda/100;
    }else
    {
        comissao = 255 + 0.09*venda/100;
    }
    comissao = comissao < 39 ? 39:comissao;
    printf("Taxa de corretagem: $%.2f",comissao);



    return 0;
}