#include <stdio.h>


int main(){
    int numero,divisor,contador=0;
    printf("Entre com um inteiro positivo:");
    scanf("%d",&numero);
    printf("[");
    for (int i=1;i<=(numero/2);i++){
        if (i==1){
            printf("%d",i);
            contador++;
        }
        else if (numero % i == 0){
            contador++;
            printf(", %d",i);
        }
    }
    if (numero==1){
        printf("%d]\n",numero);
    }else{
        contador++;
        printf(", %d]\n",numero);
    }

    if(contador==2){
        printf("É primo \n");
    }else{
        printf("Não é primo\n");
    }
    printf("%d",contador);




    return 0;
}