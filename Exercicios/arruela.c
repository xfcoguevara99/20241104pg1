#include <stdio.h>
#include <math.h>
float calc_area_circulo(float diametro)
{
    float resultado;
    resultado = 3.14*pow(diametro/2,2);
    return resultado;
}

float calc_area_anel(float diametro_int, float diametro_ext)
{
    float resultado;
    resultado = calc_area_circulo(diametro_ext) - calc_area_circulo(diametro_int);
    return resultado;

}
float calc_massa_arruela(float d1,float d2,float H,float rho)
{
    float resultado,volumen_arruela;
    volumen_arruela = calc_area_anel(d1,d2) * H;
    resultado = volumen_arruela * rho;

    return resultado;
}


int main()
{
    float diametro_interno,diametro_externo,espesura,densidade,massa_total;
    int numer_de_arruela; 
    printf("Entre com o diâmetro interno (cm): ");
    scanf("%f",&diametro_interno);
    printf("Entre com o diâmetro externo (cm): ");
    scanf("%f",&diametro_externo);
    printf("Entre com a espessura (cm): ");
    scanf("%f",&espesura);
    printf("Entre com a densidade (g/cm³): ");
    scanf("%f",&densidade);
    printf("Entre com o número de arruelas: ");
    scanf("%d",&numer_de_arruela);
    massa_total = calc_massa_arruela(diametro_interno,diametro_externo,espesura,densidade) * numer_de_arruela;
    printf("Massa total: %.2f g", massa_total);
    return 0;
} 
