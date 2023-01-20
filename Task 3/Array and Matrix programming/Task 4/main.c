/*
*C program to find maximum and minimum element in array
*/
#include<stdio.h>
#define size 100
void main(void)
{
	int n, min, max;
	int arr[size];
	
	printf("Input size: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	  printf("array[%d]: ",i+1);
	  scanf("%d",&arr[i]);
	}
	
	 min=max=arr[0];
	  
	for(int i=1;i<n;i++)
	 {
	  if(max < arr[i])
		 max = arr[i];
	  if(min > arr[i])
		  min = arr[i];
	 }
	 
	 printf("Maximum = %d\n", max);
	 printf("Minimum = %d", min);
}