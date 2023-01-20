/*
*C program to input and print array elements using pointers
*/
#include<stdio.h>
#define Max_size 100

void main(void)
{
	int arr_1[Max_size], arr_2[Max_size];
	int size;
    int * ptr = arr_1;
	
	printf("Input array size: ");
	scanf("%d",&size);
	
    printf("Input array elements: ");
    
	for(int i=0; i<size; i++) 
	{
	  scanf("%d", ptr);
	  ptr++;
	}
	
	 ptr = arr_1;
	printf("Array elements: ");
	for(int i=0; i<size; i++) 
	{
	   printf("%d", *ptr);
       ptr++;
	}
	
}
