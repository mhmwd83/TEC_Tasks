/*
*C program to add two numbers using pointers
*/
#include<stdio.h>
void swap(int* a, int* b);

void main(void)
{
	int x,y,temp;
	
	printf("Input First number: ");
	scanf("%d",&x);
	
	printf("Input second number: ");
	scanf("%d",&y);
    
    printf("number 1 before swap: %d\n",x);
	printf("number 2 before swap: %d\n",y);
	
	swap(&x,&y);
	
	printf("number 1 after swap: %d\n",x);
	printf("number 2 after swap: %d\n",y);
	
}


void swap(int* a, int* b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}