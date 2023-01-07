#include<stdio.h>
 
void main (void)
{
	char x;
	
	printf("Input character: ");
	scanf("%c", &x);
	
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || 
       x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        printf("'%c' is Vowel.", x);
    }
	    else if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        printf("'%c' is Consonant.", x);
    }
    else
        printf("'%c' is not an alphabet.", x);
}
