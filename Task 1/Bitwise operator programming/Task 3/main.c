#include<stdio.h>
 
void main (void)
{
	int num, n, bit;
	
	printf("enter any number: ");
	scanf("%d", &num);
	printf("Input nth bit number: ");
	scanf("%d", &n);
	
	bit = (num >>n) &1;
	
    printf("%d bit is set to (%d)", n, bit);
}
