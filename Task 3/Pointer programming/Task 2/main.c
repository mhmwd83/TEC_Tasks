/*
*C program to add two numbers using pointers
*/
#include<stdio.h>

void main(void)
{
	int x,y;
	int *ptr_1, *ptr_2;
	
	printf("Input First number: ");
	scanf("%d",&x);
	
	printf("Input second number: ");
	scanf("%d",&y);
    
	ptr_1 = &x;
	ptr_2 = &y;
	
	
	printf("Sum = %d\n",*ptr_1 + *ptr_2);
	printf("Sum = %d\n",*ptr_1 - *ptr_2);
	printf("Sum = %d\n",*ptr_1 * *ptr_2);
	printf("Sum = %d\n",*ptr_1 / *ptr_2);
}