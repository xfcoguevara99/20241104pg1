#include <stdio.h>

int eh_cpf_valido(int d1, int d2,int d3,int d4,int d5,int d6,int d7,int d8,int d9,int d10,int d11)
{
    int resultado,digito_verificador1,digito_verificador2;
    
    digito_verificador1 = ((10*d1+9*d2+8*d3+7*d4+6*d5+5*d6+4*d7+3*d8+2*d9)*10)%11;
    digito_verificador1 = (digito_verificador1 == 10) ? 0:digito_verificador1;
    digito_verificador2 = ((11*d1+10*d2+9*d3+8*d4+7*d5+6*d6+5*d7+4*d8+3*d9+2*digito_verificador1)*10)%11;
    digito_verificador2 = (digito_verificador2 == 10) ? 0:digito_verificador2;
    resultado = (digito_verificador1 == d10 && digito_verificador2 ==d11);
    return resultado;
}
void imprime_cpf(int d1, int d2,int d3,int d4,int d5,int d6,int d7,int d8,int d9,int d10,int d11)
{
    printf("%d%d%d.%d%d%d.%d%d%d-%d%d\n",d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11);
}

void imprime_ufs(int d9)
{
    switch (d9)
    {
    case 1:
        printf("DF, GO, MT, MS, TO");
        break;
    case 2:
        printf("AC, AP, AM, PA, RO, RR");
        break;
    case 3:
        printf("CE, MA, PI");
        break;
    case 4:
        printf("AL, PB, PE, RN");
        break;
    case 5:
        printf("BA, SE");
        break;
    case 6:
        printf("MG");
        break;
    case 7:
        printf("ES, RJ");
        break;
    case 8:
        printf("SP");
        break;
    case 9:
        printf("PR, SC");
        break;
    case 0:
        printf("RS");
        break;
    }
}




 int main()
 {
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11;
    printf("Entre com o CPF (somente números): "); 
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10,&d11);

    if (eh_cpf_valido(d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11))
    {
        printf("CPF válido\n");
        printf("Formato padrão: ");
        imprime_cpf(d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11);
        printf("Unidades federativas: ");
        imprime_ufs(d9);

        
    }
    else
    {
        printf("CPF inválido");
    }

    return 0;
 }
 

 