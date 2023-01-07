#include<stdio.h>

void main(void)
{
   int len, wid, peri;
   
   printf("Enter length: ");
   scanf("%d", &len);

   printf("Enter width: ");
   scanf("%d", &wid);
   
    peri = 2*(len + wid);
	
    printf("\nPerimeter of rectangle = %d units\n", peri);

}