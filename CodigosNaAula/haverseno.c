#include <stdio.h>
#include <math.h>
#define radio_da_terra 6371

float hav(float theta){
    float resultado;
    resultado = pow(sin(theta/2),2);
    return resultado;
}

float graus2radian(float graus){
    float resultado;
    resultado = (graus * M_PI)/180;
    return resultado;
}

float distancia_na_terra(float lat1, float lon1, float lat2, float lon2){
    float resultado;
    resultado = (2 * radio_da_terra * asin(sqrt(hav(graus2radian(lat2)-graus2radian(lat1))+(cos(graus2radian(lat1))*cos(graus2radian(lat2))*hav(graus2radian(lon2)-graus2radian(lon1))))));
    return resultado;
}

int main()
{
    float a,b,c,d,distancia;
    printf("Entre com lat lon do ponto 1: ");
    scanf("%f%f",&a,&b);
    printf("Entre com lat lon do ponto 2: ");
    scanf("%f%f",&c,&d);
    distancia = distancia_na_terra(a,b,c,d);
    printf("Distância entre os pontos: %.2f\n",distancia);
    return 0;
}
