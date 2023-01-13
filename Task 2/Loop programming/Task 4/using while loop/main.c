#include<stdio.h>

void main(void)
{
   int x, i=1;
   printf("Input upper range: ");
   scanf("%d", &x);
  printf("Even numbers between 1 to %d: ", x);
    while (i<=x)
    {
        if(i%2 == 0)
        {
            printf("%d ", i);
        }
		i++;
    }
}