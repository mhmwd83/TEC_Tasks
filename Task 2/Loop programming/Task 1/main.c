#include<stdio.h>

void main(void)
{
   int x;
   printf("Input upper limit: ");
   scanf("%d", &x);
  printf("Natural numbers from 1 to %d: ", x);
   for(int i = 0; i<x;i++)
     {  
    printf("%d ",i+1);
     }
}