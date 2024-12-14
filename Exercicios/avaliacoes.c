#include <stdio.h>
#include <stdbool.h>
float maximo(float numero1, float numero2)
{
    return (numero1>numero2) ? numero1:numero2;
}
float media(float numero1, float numero2,float numero3)
{
    float media;
    media = (numero1 + numero2 + numero3)/3;
    return media;
}
int arredondar(float numero)
{
    int parte_inteira,copia_numero,resultado;
    float parte_decimal;
    copia_numero = (int)(numero * 10);
    parte_inteira = copia_numero/10;
    parte_decimal = copia_numero % 10;
    resultado = (parte_decimal>=5) ? parte_inteira+1:parte_inteira;
    return resultado;
}

int main()
{
    float p1,p2,p3,r1,r2,r3,frecuencia;
    int resultado_final=0,aprovado=0;
    //bool aprovado;
    printf("Entre com P1 e R1: ");
    scanf("%f%f",&p1,&r1);
    printf("Entre com P2 e R2: ");
    scanf("%f%f",&p2,&r2);
    printf("Entre com P3 e R3: ");
    scanf("%f%f",&p3,&r3);
    printf("Entre com a frequência (%%): ");
    scanf("%f",&frecuencia);
    if (frecuencia>=75)
    {
        resultado_final = arredondar(media(maximo(p1,r1),maximo(p2,r2),maximo(p3,r3)));  
    }
    
    //printf("Resultado final: %d\n",resultado_final);
   // printf("%d",resultado_final > 6);
    if (resultado_final >= 6)
    {
        aprovado=1;
    }

    printf("Resultado final: %d\n",resultado_final);
    if (aprovado)
    {
        printf("Situação: aprovado");    
    }else
    {
        printf("Situação: reprovado");    
    }
    
    return 0;
}