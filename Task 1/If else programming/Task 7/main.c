#include<stdio.h>
 
void main (void)
{
	char x;
	
	printf("Input character: ");
	scanf("%c", &x);
	
	if( (x>=65) && (x<=90) || (x>=97) && (x<=122) )
    printf("'%c' is alphabet", x);
    else
	printf("'%c' is not alphabet", x);
}
