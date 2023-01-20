/*
*C program to find second largest number in array
*/
#include<stdio.h>
#define size 100
void main(void)
{
	int n, min, max, second;
	int arr[size];
	
	printf("Input size: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	  printf("array[%d]: ",i+1);
	  scanf("%d",&arr[i]);
	}
	
	second=max=arr[0];
	  
	for(int i=1;i<n;i++)
	 {
	  if(max < arr[i])
	    {
		 second = max;
		 max = arr[i];
	    }
		
	  else if(arr[i] > second && arr[i] < max)
		  second = arr[i];
	 }
	 
	 printf("Second largest = %d\n", second);
}