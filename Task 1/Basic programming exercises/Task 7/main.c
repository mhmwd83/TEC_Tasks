#include<stdio.h>

void main(void)
{
   float celsius, fahrenheit;
   
   printf("Enter temperature in Celsius = ");
   scanf("%f", &celsius);

    fahrenheit = ((celsius * (1.8)) + 32);

    printf("\nTemperature in Fahrenheit = %0.2f F\n", fahrenheit);


}