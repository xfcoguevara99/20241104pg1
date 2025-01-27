#include <stdio.h>
#include <stdbool.h>
int vogal(char letra){
    bool maiuscula=false,minuscula=false;
    switch (letra){
        case 'A':
            maiuscula = true;
            break;
        case 'E':
            maiuscula = true;
            break;
        case 'I':
            maiuscula = true;
            break;
        case 'O':
            maiuscula = true;
            break;
        case 'U':
            maiuscula = true;
            break;
    }
    switch (letra){
        case 'a':
            minuscula = true;
            break;
        case 'e':
            minuscula = true;
            break;
        case 'i':
            minuscula = true;
            break;
        case 'o':
            minuscula = true;
            break;
        case 'u':
            minuscula = true;
            break;
    }

    return (maiuscula || minuscula);
}

int main(){
    char letra;
    int vogais=0,consonantes=0;
    printf("Entre com a frase: ");
    scanf("%c",&letra);
    vogais += vogal(letra);
    while (letra != '\n'){
        scanf("%c",&letra);
        vogais += vogal(letra);
    }
    printf("%d\n",vogais);
    return 0;
}