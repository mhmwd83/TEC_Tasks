/*
*C program to declare, initialize, input and print array elements
*/
#include<stdio.h>
#define size 1000
void main(void)
{
	int n;
	int arr[size];
	
	printf("Input size: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	  printf("array[%d]: ",i+1);
	  scanf("%d",&arr[i]);
	}
	 
	 printf("Input elements:\n");
	
	for(int i=0;i<n;i++)
	{
	   printf("\t\t%d\n",arr[i]);
	}
}