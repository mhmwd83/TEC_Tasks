/*
*C program to count negative elements in array
*/
#include<stdio.h>
#define size 100
void main(void)
{
	int n, neg_cnt=0;
	int arr[size];
	
	printf("Input size: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	  printf("array[%d]: ",i+1);
	  scanf("%d",&arr[i]);
	}
	  
	for(int i=0;i<n;i++)
	 {
	  if(arr[i] < 0)
	    {
         neg_cnt++;
	    }
	 }
	 
	 printf("Total number of negative elements: %d\n", neg_cnt);
}