#include<stdio.h>

void main(void)
{
   float celsius, fahrenheit;
   
   printf("Enter temperature in fahrenheit = ");
   scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32)/1.8;

    printf("\nTemperature in celsius = %0.2f C\n", celsius);


}