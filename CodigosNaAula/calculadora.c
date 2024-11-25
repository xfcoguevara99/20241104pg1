#include <stdio.h>
int main(){
    float number1,number2,res;
    char ope;
    printf("Escreva a operacao a fazer: ");
    scanf("%f%c%f",&number1,&ope,&number2);
    switch (ope)
    {
    case 43:
        res = number1 + number2;
        break;
    case 45:
        res = number1 - number2;
        break;
    case 42:
        res = number1 * number2;
        break;
    case 47:
        if (number2 == 0){
            printf("ERROR DIVISAO POR ZERO\n");
            return 1;
        }
        else{
            res = number1 / number2;
        }
        break;
    default:
        printf("ERRO: OPERACAO NAO RECONHECIDA\n");
        return 1;
    }
    printf("O resultado é: %.2f\n",res);
    return 0;
}