#include <stdio.h> 
//fazer exercicios  ano bisexto ate taxa e corretoria
int main()
{
    float peso,altura,indice_massa_corporal;
    
    printf("Entre com o peso: ");
    scanf("%f",&peso);
    printf("Entre com a altura em metro: ");
    scanf("%f",&altura);
    indice_massa_corporal = peso/(altura*altura);
    printf("IMC: %.2f\n",indice_massa_corporal);
    if (indice_massa_corporal < 18.5){
        printf("Clasificacao: Abaixo do peso");
    }else if(indice_massa_corporal < 25){
        printf("Clasificacao: Peso Normal\n");
    }else if(indice_massa_corporal < 30){
        printf("Clasificacao: Sobrepeso\n");
    }else{
        printf("Clasificacao: Obesidade\n");
    }
    return 0;
}

