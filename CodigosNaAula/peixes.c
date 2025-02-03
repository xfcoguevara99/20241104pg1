#include <stdio.h>


int main(){
    float inicio,final,m;
    int contador=0,n;
    printf("Entre com a faixa de pH adequada:");
    scanf("%f%f",&inicio,&final);
    printf("Entre com o número de medições:");
    scanf("%d",&n);
    printf("Entre com as medições de pH:");
    for (int i=0;i<n;i++){
        scanf("%f",&m);
        if (m<inicio || m>final){
            contador+=1;
        }
    }
    printf("Número de medições fora da faixa: %d\n",contador);
    return 0;
}