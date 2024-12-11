#include <stdio.h>
char decompor(float x,int *parte_int,float *parte_frac)
{
    char sinal;
    if (x>0)
    {
        sinal = '+';
    }else if(x<0){
        sinal = '-';
        x = -x;
    }else{
        sinal = ' ';
    }
    *parte_int = (int)x;
    *parte_frac = x - *parte_int;
    return sinal;
}



int main()
{
    float numero,parte_frac;
    int parte_int;

    printf("Entre com um número real: ");
    scanf("%f",&numero);
    printf("Sinal: %c\n",decompor(numero,&parte_int,&parte_frac));
    printf("Parte inteira: %d\n",parte_int);
    printf("Parte francionaria : %g\n",parte_frac);
    

    return 0;
}