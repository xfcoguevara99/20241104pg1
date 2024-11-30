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
            resultado = 31;
        }else{
            resultado = 30;
        }
    }else{
        if (mes % 2){
            resultado = 30;
        }else{
            resultado = 31;
        }
    }

    return resultado;
}
bool eh_data_valida(int dia, int mes, int ano){
    bool resultado = true;
    int numero_dias_do_mes;
    numero_dias_do_mes = num_dias(mes,ano);
    if ((dia > numero_dias_do_mes) || (mes>12) || (ano>2024)){
        resultado = false;
    }
    return resultado;
}

int main()
{
    int dia,mes,ano;
    printf("Entre com a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&dia,&mes,&ano);

    return 0;
}
