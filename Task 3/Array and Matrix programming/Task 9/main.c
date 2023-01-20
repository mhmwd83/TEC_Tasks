/*
*C program to insert an element in array
*/
#include<stdio.h>
#define size 100
void main(void)
{
	int n, position, element;
	int arr[size];
	
	printf("Input size: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	  printf("array[%d]: ",i+1);
	  scanf("%d",&arr[i]);
	}
	
	printf("Input element to insert: ");
	scanf("%d",&element);
	
	printf("Input position where to insert:  ");
	scanf("%d",&position);
	
	 /* If position of element is not valid */
    if(position > n+1 || position <= 0)
        {
			
        printf("Invalid position! Please enter position between 1 to %d", size);
		
        }
	else
    {
        /* Make room for new array element by shifting to right */
        for(int i=n; i>=position; i--)
        {
            arr[i] = arr[i-1];
        }
        
        /* Insert new element at given position and increment size */
        arr[position-1] = element;
        n++; 
	 
	     printf("Elements of array after inserting are : ");
	     for(int i=0;i<n;i++)
	        {
	          printf("%d ", arr[i]);
	        }
	}
}