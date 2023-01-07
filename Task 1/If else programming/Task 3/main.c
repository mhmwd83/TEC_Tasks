#include<stdio.h>
 
void main (void)
{
	int x;
	
	printf("Enter number: ");
	scanf("%d", &x);
	
	if(x >0)
    printf("%d is positive", x);
	else if(x <0)
    printf("%d is negative", x);
	else
    printf("%d is Zero", x);
}
