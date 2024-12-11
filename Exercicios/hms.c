#include <stdio.h>
void eh_plural(int numero, char escala)
{
    if (numero>1)
    {
        switch (escala)
        {
            case 'H':
                printf("%d horas",numero);
                break;
            case 'M':
                printf("%d minutos",numero);
                break;
            case 'S':
                printf("%d segundos",numero);
                break;
        }
    }else if (numero==1)
    {
        switch (escala)
        {
            case 'H':
                printf("%d hora",numero);
                break;
            case 'M':
                printf("%d minuto",numero);
                break;
            case 'S':
                printf("%d segundo",numero);
                break;
        }
    }
}
int main()
{
    int segundos,horas,minutos;
    printf("Entre com a quantidade de segundos: ");
    scanf("%d",&segundos);
    //Calculo das horas
    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    segundos = segundos - horas*3600 - minutos*60;
    eh_plural(horas,'H');
    if (horas != 0 && minutos!=0 && segundos!=0){
        printf(", ");
    }
    eh_plural(minutos,'M');
    if (segundos!=0 && minutos!=0){
        printf(", ");
    }
    eh_plural(segundos,'S');
    

    return 0;
}
