#include <stdio.h>
int main()
{
    int numero,numero1,numero2;
    //char *numero_extenso1,*numero_extenso2;
    printf("Entre com um inteiro de 1 a 99: ");
    scanf("%d",&numero);
    numero1 = numero/10;
    numero2 = numero%10;
    printf("Número por extenso: \"");
    if(numero > 9 && numero <=20)
    {
        switch(numero)
        {
        case 10:
        printf("dez");
        break;
        case 11:
        printf("onze");
        break;
        case 12:
        printf("doze");
        break;
        case 13:
        printf("treze");
        break;
        case 14:
        printf("catorce");
        break;
        case 15:
        printf("quinze");
        break;
        case 16:
        printf("dezesseis");
        break;
        case 17:
        printf("dezessete");
        break;
        case 18:
        printf("dezoito");
        break;
        case 19:
        printf("dezenove");
        break;
        case 20:
        printf("vinte");
        break;
    }
    }else
    {
        switch (numero1)
        {
            case 2:
                printf("vinte");
                break;
            case 3:
                printf("trinta");
                break;
            case 4:
                printf("cuarenta");
                break;
            case 5:
                printf("cincuenta");
                break;
            case 6:
                printf("sesenta");
                break;
            case 7:
                printf("setenta");
                break;
            case 8:
                printf("oitenta");
                break;
            case 9:
                printf("noventa");
                break;
        }
        if (numero1 && numero2)
        {      
            printf(" e ");
        }
        switch (numero2)
        {
            case 1:
                printf("um");
                break;
            case 2:
                printf("dois");
                break;
            case 3:
                printf("três");
                break;
            case 4:
                printf("quatro");
                break;
            case 5:
                printf("cinco");
                break;
            case 6:
                printf("seis");
                break;
            case 7:
                printf("sete");
                break;
            case 8:
                printf("oito");
                break;
            case 9:
                printf("nove");
                break;
        }
    }   
    printf("\"");
    return 0;
}