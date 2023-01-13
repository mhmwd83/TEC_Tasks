/**
 * C program to find reverse of a number
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
    int num, reverse=0, original;

    printf("Enter any number: ");
    scanf("%d", &num);
    original = num;
     while(num !=0) 
	 {
		 reverse = (reverse * 10) + (num % 10);; 
	     num = num/10;
	 }
	 
	 if (original == reverse)
		     printf(" %d is palindrome",original);
	 else
		     printf(" %d is not palindrome",original);
		 
}