#include<stdio.h>

int power_Fun(int x, int y);

void main(void)
{
   int base, exponent, power;
   
   printf("Enter base: ");
   scanf("%d", &base);
   printf("Enter exponent: ");
   scanf("%d", &exponent);
   power = power_Fun(base,exponent);
   printf("%d ^ %d = %d\n", base, exponent, power);
}


int power_Fun(int x, int y)
{
	int result=1;
	for (int i=1; i<=y; i++)
		result = result * x;
	return result;
}