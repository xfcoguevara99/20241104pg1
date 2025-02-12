#include <stdio.h>
#include <math.h>

typedef struct{
    float ladoA;
    float ladoB;
    float angulo;
}Paralelogramo;

int main(){
    float area,perimetro;
    Paralelogramo p;
    printf("Entre com os lados:");
    scanf("%f%f",&p.ladoA,&p.ladoB);
    printf("Entre com o ângulo (graus):");
    scanf("%f",&p.angulo);
    perimetro = 2*(p.ladoA + p.ladoB);
    area = p.ladoA * p.ladoB * sin(p.angulo*M_PI/180.0);
    printf("Perimetro: %g\n",perimetro);
    printf("Area: %g\n",area);






    return 0;
}