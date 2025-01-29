#include <stdio.h>
#include <stdbool.h>
bool eh_triangular(int n){
    int contador=0,soma=0;

    while (soma < n){
        contador +=1;
        soma = soma + contador;
    };
    return (soma == n) ? true:false;
}

int main(){
    int numero;
    printf("Entre com o numero: ");
    scanf("%d",&numero);
    
    if (eh_triangular(numero)){
        printf("É triangular\n");
    }else{
        printf("Não é triangular\n");
    }
    return 0;
}