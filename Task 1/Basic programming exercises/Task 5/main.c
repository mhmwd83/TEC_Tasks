#include<stdio.h>
#define pi 3.14
void main(void)
{
   float radius, diameter, circumference, area;
   
   printf("Enter radius: ");
   scanf("%f", &radius);

    diameter = 2 * radius;
	circumference = 2 * pi * radius;
	area = pi * radius * radius;
	
    printf("\nDiameter = %0.2f units\n", diameter);
	printf("Circumference = %0.2f units\n", circumference);
	printf("Area = %0.2f sq.units\n", area);

}