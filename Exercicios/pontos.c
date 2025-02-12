#include <stdio.h>
#include <math.h>
typedef struct{
    float x,y;

}Ponto;

int Quadrante(Ponto p){
    if (p.x==0 && p.y==0){
        return 0;
    }
    if (p.x>0){
        if (p.y>0){
            return 1;
        }else{
            return 4;
        }
    }else if(p.x<0){
        if (p.y>0){
            return 2;
        }else{
            return 3;
        }
    }
}
float distancia(Ponto p1,Ponto p2){
    float distancia,a,b;
    a = pow(p2.x - p1.x,2);
    b = pow(p2.y - p1.y,2);
    return sqrt(a+b);
}

Ponto ponto_medio(Ponto p1,Ponto p2){
    Ponto p3;
    p3.x = (p1.x + p2.x)/2.0;
    p3.y = (p1.y + p2.y)/2.0;
    return p3;

}


int main(){
    Ponto p1,p2,p3;
    printf("Entre com o ponto 1:");
    scanf("%f%f",&p1.x,&p1.y);
    printf("Entre com o ponto 2:");
    scanf("%f%f",&p2.x,&p2.y);
    printf("Quadrante do ponto 1: %d\n",Quadrante(p1));
    printf("Quadrante do ponto 2: %d\n",Quadrante(p2));
    printf("Distância: %g\n",distancia(p1,p2));
    p3 = ponto_medio(p1,p2);
    printf("Ponto médio: (%g,%g))",p3.x,p3.y);




    return 0;
}