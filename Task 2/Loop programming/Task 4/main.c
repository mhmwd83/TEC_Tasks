#include<stdio.h>

void main(void)
{
   int x;
   printf("Input upper range: ");
   scanf("%d", &x);
  printf("Even numbers between 1 to %d: ", x);
    for(int i=1; i<=x; i++)
    {
        if(i%2 == 0)
        {
            printf("%d ", i);
        }
    }
}