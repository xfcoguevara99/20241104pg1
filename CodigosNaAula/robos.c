#include <stdio.h>
#include <math.h>
typedef struct{
    float x;
    float y;
}Ponto;

void mover_ponto(Ponto *p, char direcao, float distancia){
    switch (direcao)
    {
    case 'N':
        p->y += distancia;
        break;
    case 'S':
        p->y -= distancia;
        break;
    case 'L':
        p->x += distancia;
        break;
    case 'O':
        p->x -= distancia;
        break;
    }

}

int main(){
    Ponto robo1 = {0,0},robo2 = {10,10};
    char sentido;
    float distancia;
    printf("Entre com os movimentos do robô 1:");
    for (int i=0;i<3;i++){
        scanf(" %c %f",&sentido,&distancia);
        mover_ponto(&robo1,sentido,distancia);
    }
    printf("Entre com os movimentos do robô 2:");
    for (int i=0;i<3;i++){
        scanf(" %c %f",&sentido,&distancia);
        mover_ponto(&robo2,sentido,distancia);
    }
    printf("Posição final do robô 1:(%g,%g)\n",robo1.x,robo1.y);
    printf("Posição final do robô 2:(%g,%g)\n",robo2.x,robo2.y);
    printf("Distância entre os robôs: %g\n",hypot(robo2.x-robo1.x,robo2.y-robo1.y));

    return 0;
}