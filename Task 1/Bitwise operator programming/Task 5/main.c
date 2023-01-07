#include<stdio.h>
 
void main (void)
{
	int num, n, newnum;
	
	printf("enter any number: ");
	scanf("%d", &num);
	printf("Input nth bit number: ");
	scanf("%d", &n);
	
	newnum = num & (~ (1 << n));
	
    printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newnum);
}
