#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    int segredo,palpite,tentativas;
    srand(time(NULL));
    segredo = (rand()%100)+1;
    tentativas = 0;
    do{
        printf("Entre com seu palpite (1 a 100):");
        scanf("%d",&palpite);
        tentativas+=1;
        if(segredo>palpite){
            printf("O segredo é maior\n");
        }else if(segredo<palpite){
            printf("O segredo é menor\n");

        }
    }while(palpite!=segredo);
    printf("Parabéns, você acertou em %d tentativas!: ",tentativas);
    return 0;
}