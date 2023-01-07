#include<stdio.h>
 
void main (void)
{
	int x;
	
	printf("Enter any number: ");
	scanf("%d", &x);

	(x%2 == 1) ?  printf("%d is odd",x) : printf("%d is even",x);
}
