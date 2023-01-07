#include<stdio.h>
 
void main (void)
{
	int num, n, newnum;
	
	printf("enter any number: ");
	scanf("%d", &num);
	printf("Input nth bit number: ");
	scanf("%d", &n);
	
	newnum = (1 <<n) | num;
	
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newnum);
}
