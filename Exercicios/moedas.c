#include <stdio.h>
#define centavos_50 50
#define centavos_25 25
#define centavos_10 10
#define centavos_5 5
#define centavos_1 1

int main()
{
    int centavos,moedas_50,moedas_25,moedas_10,moedas_5,moedas_1,restante;
    printf("Entre com a quantidade de centavos: ");
    scanf("%d",&centavos);
    moedas_50 = centavos / centavos_50;
    restante = centavos % centavos_50;
    centavos = restante;
    moedas_25 = centavos / centavos_25;
    restante = centavos % centavos_25;
    centavos = restante;
    moedas_10 = centavos / centavos_10;
    restante = centavos % centavos_10;
    centavos = restante;
    moedas_5 = centavos / centavos_5;
    restante = centavos % centavos_5;
    centavos = restante;
    moedas_1 = centavos / centavos_1;
    restante = centavos % centavos_1;
    printf("Moedas de 50 centavos: %d\n",moedas_50);
    printf("Moedas de 25 centavos: %d\n",moedas_25);
    printf("Moedas de 10 centavos: %d\n",moedas_10);
    printf("Moedas de 5 centavos: %d\n",moedas_5);
    printf("Moedas de 1 centavo: %d\n",moedas_1);
    return 0;
}