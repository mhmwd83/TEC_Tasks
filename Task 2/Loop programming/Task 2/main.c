#include<stdio.h>

void main(void)
{
   int x;
   printf("Input N: ");
   scanf("%d", &x);
  printf("Natural numbers from %d-1 in reverse: ", x);
   for(int i = x; i>0;i--)
     {  
    printf("%d ",i);
     }
}