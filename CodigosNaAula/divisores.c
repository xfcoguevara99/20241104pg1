#include <stdio.h>


int main(){
    int numero,divisor,contador=2;
    printf("Entre com um inteiro positivo:");
    scanf("%d",&numero);
    printf("[1");
    for (int i=2;i<=(numero/2);i++){
        if (numero % i == 0){
            contador++;
            printf(", %d",i);
        }
    }
    if (numero==1){
        printf("]\n");
    }else{
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