/*
*C program to count even and odd elements in array
*/
#include<stdio.h>
#define size 100
void main(void)
{
	int n, old_cnt=0,even_cnt=0;
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
	  if((arr[i]%2)== 0)
	    {
         even_cnt++;
	    }
		
	  else
		  old_cnt++;
	 }
	 
	 printf("Total even elements: = %d\n", even_cnt);
	 printf("Total odd elements: = %d\n", old_cnt);
}