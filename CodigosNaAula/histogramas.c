#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int num_rolagens,dado1,dado2,soma;
    int ocorrencias[13];
    srand(time(NULL));

    printf("Entre com o número de rolagens:");
    scanf("%d",num_rolagens);
    for (int i =1;i<= num_rolagens;i++){
        dado1 = rand()%6 + 1;
        dado2 = rand()%6 + 1;
        soma = dado1 + dado2;
        ocorrencias[soma]++;
    }
    for (soma = 2;soma <=12;soma++){

        printf("%d : %,2f%%\n",soma,ocorrencias[soma]/num_rolagens);
    }





    return 0;
}