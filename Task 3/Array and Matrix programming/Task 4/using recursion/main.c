/*
*C program to find maximum and minimum element in array
*/
#include<stdio.h>
#define Max_size 100
int minimum(int array[], int index,int size);
int maximum(int array[], int index,int size);
void main(void)
{
	int n, min, max;
	int arr[Max_size];
	
	printf("Input size: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	  printf("array[%d]: ",i+1);
	  scanf("%d",&arr[i]);
	}
	
	min = minimum(arr,0,n);
	max = maximum(arr,0,n);
	

	 
	 printf("Maximum = %d\n", max);
	 printf("Minimum = %d", min);
}

int minimum(int array[], int index,int size)
{
	int min = array[index];
	
	for (int i=0; i<size; i++)
		if (min > array[i])
			min = array[i];

    return min;
}


int maximum(int array[], int index,int size)
{
	int max = array[index];
	
	for (int i=0; i<size; i++)
		if (max < array[i])
			max = array[i];

    return max;
}