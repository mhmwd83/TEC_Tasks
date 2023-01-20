/*
*C program to delete element from an array
*/
#include<stdio.h>
#define size 100
void main(void)
{
	int n, position;
	int arr[size];
	
	printf("Input size: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	  printf("array[%d]: ",i+1);
	  scanf("%d",&arr[i]);
	}
	
	printf("Input position to delete:  ");
	scanf("%d",&position);
	
	 /* If position of element is not valid */
     if(position < 0 || position > n)
        {
			
        printf("Invalid position! Please enter position between 1 to %d", n);
		
        }
	else
    {
        /* Copy next element value to current element */
        for(int i=position-1; i<n-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
         n--;
	 
	     printf("Elements of array after inserting are : ");
	     for(int i=0;i<n;i++)
	        {
	          printf("%d ", arr[i]);
	        }
	}
}