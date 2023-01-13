#include<stdio.h>

void main(void)
{
	int x, first, last, sum=0;
	printf("Input num: ");
	scanf("%d", &x);
     
	 first = x;
	 last = x%10;
    while(first >= 10)
         {
           first = first / 10;   
         }
		sum = first + last;
	printf("Sum of first and last digit: %d\n", sum);

}