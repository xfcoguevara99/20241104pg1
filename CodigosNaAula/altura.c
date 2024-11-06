#include <stdio.h>
 int main()
 {
    float pes,polegadas,altura_em_metro;
    printf("Entre com sua altura em pés + polegadas: ");
    scanf("%f",&pes);
    scanf("%f",&polegadas);
    altura_em_metro = ((pes * 12.0 * 2.54) + (polegadas * 2.54))/100.0;
    printf("Altura em metros: %.2f\n",altura_em_metro);
    return 0;
 }