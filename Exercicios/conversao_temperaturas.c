#include <stdio.h>


float converte_c_para_f(float TC){
    float TF;
    TF=1.8*TC+32;
    return TF;
}
float converte_f_para_c(float TF){
    float TC;
    TC= (TF - 32)/1.8;
    return TC;
}
float converte_c_para_k(float TC){
    float TK;
    TK = TC + 273.15;
    return TK;
}
float converte_k_para_c(float TK){
    float TC;
    TC = TK-273.15;
    return TC;
}
float converte_f_para_k(float TF){
    float TK;
    TK = converte_f_para_c(TF) + 273.15;
    return TK;
}
float converte_k_para_f(float TK){
    float TF;
    TF = converte_c_para_f(converte_k_para_c(TK));
    return TF;
}
float converter_temperatura(float t,char Ti,char Tf){
    if (Ti=="C" && Tf =="F"){
        return converte_c_para_f(t);
    }else if(Ti=="F" && Tf =="C"){
        return converte_f_para_c(t);
    }else if (Ti=="C" && Tf =="K"){
        return converte_c_para_k(t);
    }else if(Ti=="K" && Tf =="C"){
        return converte_k_para_c(t);
    }else if (Ti=="F" && Tf =="k"){
        return converte_f_para_k(t);
    }else if(Ti=="C" && Tf =="F"){
        return converte_k_para_f(t);
    }
    

}

int main(){
    float temperatura;
    char origem,destino;
    printf("Entre com o valor da temperatura: ");
    scanf("%f",&temperatura);
    printf("Entre com a escala de origem (C, F, K): ");
    scanf("%c",&origem);
    printf("Entre com a escala de destino (C, F, K): ");
    scanf("%c",&destino);
    printf("Temperatura convertida: %.2f",converter_temperatura(temperatura,origem,destino));
    return 0;
}
