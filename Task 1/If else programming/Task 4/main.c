#include<stdio.h>
 
void main (void)
{
	int x;
	
	printf("Enter number: ");
	scanf("%d", &x);
	
	if(x%5 == 0 && x%11 == 0)
    printf("Number is divisible by 5 and 11");
	else
    printf("Number is not divisible by 5 and 11");
}
