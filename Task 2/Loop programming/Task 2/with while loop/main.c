#include<stdio.h>

void main(void)
{
   int x;
   printf("Input N: ");
   scanf("%d", &x);
  printf("Natural numbers from %d-1 in reverse: ", x);
   while (x !=0)
     {  
       printf("%d ",x);
	   x--;
     }
}