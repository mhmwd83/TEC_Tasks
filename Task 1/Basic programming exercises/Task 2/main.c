#include<stdio.h>

void main(void)
{
   int x, y, sum, sub, mult, mod;
   float div;
   printf("Enter first number: ");
   scanf("%d", &x);

   printf("Enter second number: ");
   scanf("%d", &y);
   
   sum = x + y;
   sub = x - y;
   mult = x * y;
   div = (float)x / y;
   mod = x % y;
   
    printf("\nThe SUM = %d\n", sum);
	printf("The DIFFERENCE = %d\n", sub);
	printf("The PRODUCT = %d\n", mult);
	printf("The QUOTIENT = %0.2f\n", div);
	printf("The MODULUS = %d\n", mod);

}