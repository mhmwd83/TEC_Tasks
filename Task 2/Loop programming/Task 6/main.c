#include<stdio.h>

void main(void)
{
	int x, sum=0;
	printf("Input upper limit: ");
	scanf("%d", &x);

    for(int i=0; i<=x; i++)
    {
      sum = sum + i;
    }
    
	printf("Sum of natural numbers 1-%d: %d", x, sum);
}