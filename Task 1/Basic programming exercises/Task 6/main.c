#include<stdio.h>

void main(void)
{
   float length, meter, kilometer;
   
   printf("Enter length in centimeter = ");
   scanf("%f", &length);

    meter = length/100;
    kilometer = meter/1000;
	
    printf("\nLength in meter = %0.2f m\n", meter);
    printf("\nLength in kilometer = %0.2f km\n", kilometer);

}