/*
*C program to copy all elements of one array to another
*/
#include<stdio.h>
#define size 100
void main(void)
{
	int n;
	int arr_1[size], arr_2[size];
	
	printf("Input size: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	  printf("array[%d]: ",i+1);
	  scanf("%d",&arr_1[i]);
	}
	  
	for(int i=0;i<n;i++)
	 {
	   arr_2[i] = arr_1[i];
	 }
	 
	printf("Array_1: ");
	for(int i=0;i<n;i++)
	 {
	   printf("%d ", arr_1[i]);
	 }
	 
	printf("\nArray_2: ");
	for(int i=0;i<n;i++)
	 {
	   printf("%d ", arr_2[i]);
	 }
}