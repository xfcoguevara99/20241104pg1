#include <stdio.h>
#include <stdbool.h>
bool bissexto(int ano){
    bool resultado;
    resultado = (ano % 4 && !(ano % 100) || ano % 400);
    return resultado;
    }
int num_dias(int mes, int ano){
    int resultado;
    if ( mes <=7){
        if (mes == 2 && bissexto(ano)){
            resultado = 29;
        } else if (mes % 2){
            resultado = 30;
        }else{
            resultado = 31;
        }
    }else{
        if (mes % 2){
            resultado = 31;
        }else{
            resultado = 30;
        }
    }

    return resultado;
}

int main()
{
    int a,b,c;
    a = bissexto(2000);
    printf("%d",a);
    

    return 0;
}
