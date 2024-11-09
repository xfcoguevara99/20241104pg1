#include <stdio.h>
#define centimetro_por_polegadas 2.54
#define polegadas_por_pes 12 
int main()
{
   float altura_em_metros;
   int pes,polegadas,altura_em_centimetros;
   printf("Entre como sua altura em metros: ");
   scanf("%f",&altura_em_metros);
   altura_em_centimetros = altura_em_metros * 100;
   polegadas = altura_em_centimetros/centimetro_por_polegadas;
   pes = (int)polegadas / polegadas_por_pes;
   polegadas = (int)(altura_em_centimetros/centimetro_por_polegadas)%polegadas_por_pes;
   printf("Altura em Pes + polegadas: %d'%d\n",pes,polegadas);

    
   return 0;
}