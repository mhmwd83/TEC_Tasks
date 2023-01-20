/*
*C program to find sum of array elements
*/
#include<stdio.h>
#define size 1000
void main(void)
{
	int n, sum=0;
	int arr[size];
	
	printf("Input size: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	  printf("array[%d]: ",i+1);
	  scanf("%d",&arr[i]);
	  sum = sum +arr[i];
	}
	 
	 printf("Sum of all elements = %d", sum);
}