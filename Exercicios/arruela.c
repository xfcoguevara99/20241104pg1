#include <stdio.h>
#include <math.h>
float calc_area_circulo(float raio)
{
    float resultado;
    resultado = pow(M_PI,2) * raio;
    return resultado;
}

float calc_area_anel(float r_int, float r_ext)
{
    float resultado;
    resultado = calc_area_circulo(r_ext) - calc_area_circulo(r_int);
    return resultado;

}
float calc_massa_arruela(float d1,float d2,float H,float rho)
{
    float resultado,volumen_arruela;
    volumen_arruela = calc_area_anel(d1/2,d2/2) * H;
    resultado = volumen_arruela * rho;

    return resultado;
}


int main()
{
    float a,raio_interno,raio_externo,espesura,densidade,massa_total;
    int numer_de_arruela; 
    printf("Entre com o diâmetro interno (cm): ");
    scanf("%f",&raio_interno);
    printf("Entre com o diâmetro externo (cm): ");
    scanf("%f",&raio_externo);
    printf("Entre com a espessura (cm): ");
    scanf("%f",&espesura);
    printf("Entre com a densidade (g/cm³): ");
    scanf("%f",&densidade);
    printf("Entre com o número de arruelas: ");
    scanf("%d",&numer_de_arruela);
    massa_total = calc_massa_arruela(raio_interno,raio_externo,espesura,densidade) * numer_de_arruela;
    printf("Massa total: %.2f", massa_total);
    return 0;
} 
