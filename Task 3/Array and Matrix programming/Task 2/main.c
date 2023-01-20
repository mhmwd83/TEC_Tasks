/*
*C program to print all negative elements in array
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
		if(arr[i] <0)
		{
	      printf("\t\t%d\n",arr[i]);
		}
	}
}