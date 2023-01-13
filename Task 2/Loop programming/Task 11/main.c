#include<stdio.h>

void main(void)
{
	int x, first, last;
	printf("Input num: ");
	scanf("%d", &x);
     
	 first = x;
	 last = x%10;
    while(first >= 10)
         {
           first = first / 10;   
         }
	printf("First digit: %d\n", first);
    printf("Last digit: %d\n", last);
}