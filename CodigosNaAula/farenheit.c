#include <stdio.h>
int main()
{
    float temperatura_farenheit,temperatura_celsius;
    printf("Entre com a temperatura em Fahrenheit: ");
    scanf("%f",&temperatura_farenheit);
    temperatura_celsius = (temperatura_farenheit - 32)/1.8;
    printf("Temperatura em Celsius: %.1f\n",temperatura_celsius);
    return 0;
}