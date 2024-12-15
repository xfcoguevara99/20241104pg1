#include <stdio.h>
void plural_ou_singular(int numero, char unidade_tempo)
{
    if (numero>1)
    {
        switch (unidade_tempo)
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
        switch (unidade_tempo)
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
    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    segundos = segundos - horas*3600 - minutos*60;
    plural_ou_singular(horas,'H');
    if (horas != 0 && minutos!=0){
        printf(", ");
    }
    plural_ou_singular(minutos,'M');
    if (segundos!=0 && (minutos!=0 || horas!= 0)){
        printf(", ");
    }
    plural_ou_singular(segundos,'S');
    return 0;
}
