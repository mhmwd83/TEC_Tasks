#include<stdio.h>
 
void main (void)
{
	char x;
	
	printf("Input character: ");
	scanf("%c", &x);
	
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        printf("'%c' is a character.", x);
    }
	    else if(x >= '0' && x <= '9')
    {
        printf("'%c' is a digit.", x);
    }
    else
        printf("'%c' is a special character.", x);
}
