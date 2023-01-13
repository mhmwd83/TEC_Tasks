/**
 * C program to find reverse of a number
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
    int num, reverse=0;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Reverse of %d = ",num);
     while(num !=0) 
	 {
		 reverse = (num%10); 
         printf("%d",reverse);
	     num = num/10;
	 }



}