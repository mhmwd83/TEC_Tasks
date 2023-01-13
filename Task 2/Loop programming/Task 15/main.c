/**
 * C program to find product of digits of a number
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
    int num, sum = 1;

    printf("Enter any number: ");
    scanf("%d", &num);

     while(num !=0)
	 {
		 sum = sum * (num%10);
		 num = num /10;
	 }

    printf("Sum of digits: = %d\n", sum);


}