#include <stdio.h>
#include <math.h>
#define PI 3.141592653

float graus_em_radianes(float graus)
{
    return graus*PI/180;
}
float seno_bhaskara(float graus)
{
    float aproximacao;
    if (graus>180){
        graus = 360 - graus;
        aproximacao = -4*graus*(180-graus)/(40500-graus*(180-graus));
    }else{
        aproximacao = 4*graus*(180-graus)/(40500-graus*(180-graus));
    }
    return aproximacao;
}
float seno_real(float graus)
{
    return sin(graus_em_radianes(graus));
}

int main()
{
    float graus;
    printf("Entre com o valor do ângulo em graus: ");
    scanf("%f",&graus);
    printf("Valor aproximado do seno: %.4f\n",seno_bhaskara(graus));
    printf("Valor real do seno: %.4f",seno_real(graus));
    return 0;
}