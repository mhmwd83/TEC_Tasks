#include<stdio.h>
 
void main (void)
{
	char x;
	
	printf("Input character: ");
	scanf("%c", &x);
	
    if((x >= 'A' && x <= 'Z'))
    {
        printf("'%c' is uppercase alphabet.", x);
    }
	    else if((x >= 'a' && x <= 'z'))
    {
        printf("'%c' is lowercase alphabet.", x);
    }
    else
        printf("'%c' is not a character.", x);
}
