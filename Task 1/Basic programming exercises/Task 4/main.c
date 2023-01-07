#include<stdio.h>

void main(void)
{
   float len, wid, area;
   
   printf("Enter length: ");
   scanf("%f", &len);

   printf("Enter width: ");
   scanf("%f", &wid);
   
    area = len * wid;
	
    printf("\nArea of rectangle = %0.2f sq.units\n", area);

}