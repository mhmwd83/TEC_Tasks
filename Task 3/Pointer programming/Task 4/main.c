/*
*C program to input and print array elements using pointers
*/
#include<stdio.h>
#define Max_size 100

void main(void)
{
	int arr[Max_size];
	int size;
	
	printf("Input array size: ");
	scanf("%d",&size);
	
    printf("Input array elements: ");
    
	for(int i=0; i<size; i++) 
	scanf("%d", (arr+i));
	
	printf("Array elements: ");
	for(int i=0; i<size; i++) 
	printf("%d", *(arr+i));
	
}
