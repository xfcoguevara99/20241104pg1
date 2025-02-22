#include <stdio.h>
#include <math.h>
typedef struct{
    float media,minimo,maximo;
}Estatisticas;

Estatisticas calculcula_estatisticas(int nro_elementos, float arranjo[]){
    Estatisticas estatisticas = {0,INFINITY,-INFINITY};
    for (int = 0;i<nro_elementos;i++){
        estatisticas.media += arranjo[i];
        if (arranjo[i]>estatisticas.maximo){
            estatisticas.maximo = arranjo[i];
        }
        if (arranjo[i]<estatisticas.minimo){
            estatisticas.minimo = arranjo[i];
        }
        estatisticas.media = estatisticas.media / nro_elementos;
    }
    return estatisticas;
}


int main(){
    int nro_elementos;
    float a[100];
    printf("Entre com o número de elementos (máx 100):");
    scanf("%d",&nro_elementos);
    for (int i=0;i<nro_elementos;i++){
        scanf("%f",&a[i]);
    }
    resultados = calculcula_estatisticas(nro_elementos,a);
    printf("Média: %f\n",resultados.media);
    printf("Minimo: %f\n",resultados.minimo);
    printf("Maximo: %f\n",resultados.maximo);




    return 0;
}