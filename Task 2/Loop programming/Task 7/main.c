#include<stdio.h>

void main(void)
{
	int x, sum=0;
	printf("Input upper limit: ");
	scanf("%d", &x);

    for(int i=0; i<=x; i++)
    {
		if (i%2 == 0)
        sum = sum + i;
    }
    
	printf("Sum of even numbers 1-%d: %d", x, sum);
}