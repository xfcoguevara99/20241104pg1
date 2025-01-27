#include <stdio.h>


int main(){
    int numero,resto,soma;
    printf("Escreva o numero: ");
    scanf("%d",&numero);
    soma = 0;
    while (numero != 0){
        resto = numero % 10;
        soma = soma + resto;
        numero = numero/10;
    }
    printf("Soma dos digitos do numero: %d\n",soma);

    return 0;
}