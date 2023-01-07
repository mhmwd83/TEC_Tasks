#include<stdio.h>
#include<math.h>

void main(void)
{
   double number, root;
   
   printf("Enter any number: ");
   scanf("%lf", &number);
   
   root = sqrt(number);
   printf("Square root of %0.2lf = %0.2lf", number, root);
}