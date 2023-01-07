#include<stdio.h>
#define factor 0.433
void main (void)
{
	float side, area;
	
	printf("Enter side of the equilateral triangle: ");
	scanf("%f", &side);
	
	area = factor * (side * side);
	
	printf("Area of equilateral triangle = %0.1f sq. units", area);
}
