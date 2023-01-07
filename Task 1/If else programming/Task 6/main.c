#include<stdio.h>
 
void main (void)
{
	int x;
	
	printf("Input Year: ");
	scanf("%d", &x);
	
	if( (x%4 == 0) && (x%100 != 0) || (x%400 == 0))
    printf("%d is Leap Year", x);
    else
	printf("%d is Common Year", x);	
}
