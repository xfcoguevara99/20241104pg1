#include <stdio.h>

int converter_para_minutos(int horas,int minutos){
    return horas * 60 + minutos;
  }

void converter_para_hhmm(int minutos,int *hh,int *mm){
  *hh = minutos/60;
  *mm = minutos%60;
  }

void duracao_evento(int hh_i,int mm_i,int hh_f,int mm_f,int *hh,int *mm){
    int inicio,fim,duracao;
    if (hh_i>=hh_f)
    {
      inicio = 1440-converter_para_minutos(hh_i,mm_i);
      fim = converter_para_minutos(hh_f,mm_f);
      duracao = inicio + fim;
    }else{
      inicio = converter_para_minutos(hh_i,mm_i);
      fim = converter_para_minutos(hh_f,mm_f);
      duracao = fim - inicio;
    }
    converter_para_hhmm(duracao,hh,mm);
  }

int main() {

  int hh_inicio,mm_inicio,hh_final,mm_final,horas_total,minutos_total;
  printf("Entre com o horário de início (HH:MM): ");
  scanf("%d:%d",&hh_inicio,&mm_inicio);
  printf("Entre com o horário de término (HH:MM): ");
  scanf("%d:%d",&hh_final,&mm_final);
  duracao_evento(hh_inicio,mm_inicio,hh_final,mm_final,&horas_total,&minutos_total);
  printf("Duração do evento: ");
  if (horas_total<10){
    printf("0");
  }
  printf("%d:",horas_total);
  if (minutos_total<10){
    printf("0");
  }
  printf("%d",minutos_total);
  return 0;
}
