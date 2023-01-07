#include<stdio.h>
 
void main (void)
{
	int x;
	
	printf("Enter a year: ");
	scanf("%d", &x);

	(x%4 == 0 && x%100 !=0) ? printf("%d is Leap Year",x) : (x%4 == 0) ? printf("%d is Leap Year",x) :printf("%d is Common Year",x);
}
