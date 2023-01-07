#include<stdio.h>
 
void main (void)
{
	char x;
	
	printf("Enter any character: ");
	scanf("%c", &x);

	( (x>=65&&x<=90) || (x>=97&&x<=122)) ? printf("It is ALPHABET"): printf("It is not ALPHABET");
}