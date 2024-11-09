#include <stdio.h>

int main()
{
    int soma1,soma2,resultado1,resultado2,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,verificador;
    printf("Entre com a primeira parte (1 dígito): ");
    scanf("%d",&num1);
    printf("Entre com a segunda parte (6 dígitos): ");
    scanf("%1d%1d%1d%1d%1d%1d",&num2,&num3,&num4,&num5,&num6,&num7);
    printf("Entre com a terceira parte, sem o dígito verificador (5 dígitos): ");
    scanf("%1d%1d%1d%1d%1d",&num8,&num9,&num10,&num11,&num12);
    soma1 = num1 + num3 + num5 + num7 + num9 + num11;
    soma2 = num2 + num4 + num6 + num8 + num10 + num12;
    resultado1 = (3*soma2 + soma1)-1;
    resultado2 = resultado1%10;
    verificador = 9 - resultado2;
    printf("Dígito verificador: %d",verificador);



    return 0;
}