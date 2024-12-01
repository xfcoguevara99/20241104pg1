#include <stdio.h>
#include <stdbool.h>
bool bissexto(int ano){
    bool resultado;
    resultado = (!(ano % 4) && (ano % 100) || !(ano % 400));
    return resultado;
    }
int num_dias(int mes, int ano){
    int resultado;
    if ( mes <=7){
        if (mes == 2){
            switch (bissexto(ano))
            {
            case false:
                resultado = 28;
                break;
            case true:
                resultado = 29;
                break;
            }
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
    int dia,mes,ano,contador;
    printf("Entre com a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    if (eh_data_valida(dia,mes,ano))
    {
        switch (mes)
        {
            case 1:
                contador = dia;
                break;
            case 2:
                contador = num_dias(1,ano)+ dia;
                break;
            case 3:
                contador = num_dias(1,ano) + num_dias(2,ano) + dia;
                break;
            case 4:
                contador =num_dias(1,ano) + num_dias(2,ano)+num_dias(3,ano)+ dia;
                break;
            case 5:
                contador = num_dias(1,ano) + num_dias(2,ano) + num_dias(3,ano)+num_dias(4,ano) + dia;
                break;
            case 6:
                contador = num_dias(1,ano) + num_dias(2,ano) + num_dias(3,ano)+num_dias(4,ano)+num_dias(5,ano) +  dia;
                break;
            case 7:
                contador = num_dias(1,ano) + num_dias(2,ano) + num_dias(3,ano)+num_dias(4,ano)+num_dias(5,ano)+num_dias(6,ano) +  dia;
                break;
            case 8:
                contador = num_dias(1,ano) + num_dias(2,ano) + num_dias(3,ano)+num_dias(4,ano)+num_dias(5,ano)+num_dias(6,ano)+num_dias(7,ano) +  dia;
                break;
            case 9:
                contador = num_dias(1,ano) + num_dias(2,ano) + num_dias(3,ano)+num_dias(4,ano)+num_dias(5,ano)+num_dias(6,ano)+num_dias(7,ano)+num_dias(8,ano) +  dia;
                break;
            case 10:
                contador = num_dias(1,ano) + num_dias(2,ano) + num_dias(3,ano)+num_dias(4,ano)+num_dias(5,ano)+num_dias(6,ano)+num_dias(7,ano)+num_dias(8,ano)+num_dias(9,ano) +  dia;
                break;
            case 11:
                contador = num_dias(1,ano) + num_dias(2,ano) + num_dias(3,ano)+num_dias(4,ano)+num_dias(5,ano)+num_dias(6,ano)+num_dias(7,ano)+num_dias(8,ano)+num_dias(9,ano)+num_dias(10,ano) +  dia;
                break;
            case 12:
                contador = num_dias(1,ano) + num_dias(2,ano) + num_dias(3,ano)+num_dias(4,ano)+num_dias(5,ano)+num_dias(6,ano)+num_dias(7,ano)+num_dias(8,ano)+num_dias(9,ano)+num_dias(10,ano)+num_dias(11,ano) +  dia;
                break;
        }
    }else
    {
        printf("Error data invalida!");
        return 0;
    }
    
    printf("Dias decorridos: %d\n",contador);
    printf("%d\n",bissexto(ano));
    printf("%d\n",num_dias(1,ano));
    printf("%d\n",num_dias(2,ano));
    printf("%d\n",num_dias(3,ano));
    printf("%d\n",num_dias(4,ano));
    printf("%d\n",num_dias(5,ano));
    printf("%d\n",num_dias(6,ano));
    printf("%d\n",num_dias(7,ano));
    printf("%d\n",num_dias(8,ano));
    printf("%d\n",num_dias(9,ano));
    printf("%d\n",num_dias(10,ano));
    printf("%d\n",num_dias(11,ano));
    printf("%d\n",num_dias(12,ano));
    return 0;
}
