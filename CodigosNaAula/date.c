#include <stdio.h>
int main()
{
    int dia,mes,ano;
    char espaciador;
    printf("Entre com a data a data: ");
    scanf("%d/%d/",&dia,&mes,&espaciador,&ano);

    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Favereiro");
        break;
    case 3:
        printf("Março");
        break;
    case 4:
    printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;

    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        
        break;
    case 8:
        printf("Agosto");
        break;

    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;

    case 12:
        printf("Dezembro");
        break;
    default:
        break;
    }

    printf(" ");
    print("%d",dia);

    if (dia >=10 && dia <=20)
    {
        printf("th,");
    }

    switch (dia%10)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }

    return 0;
}

