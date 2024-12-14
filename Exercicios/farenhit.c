#include <stdio.h>


int main()
{
    float temperatura_farenhit,temperatura_celsius;
    printf("Entre com a temperatura em Fahrenheit: ");
    scanf("%f",&temperatura_farenhit);
    temperatura_celsius = (temperatura_farenhit - 32)*(5.0/9.0);
    printf("Temperatura em Celsius: %.1f",temperatura_celsius);
    return 0;
}