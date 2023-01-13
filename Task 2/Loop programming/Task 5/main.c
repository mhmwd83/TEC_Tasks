#include<stdio.h>

void main(void)
{

  printf("Odd numbers between 1 to 100: ");
    for(int i=1; i<=100; i++)
    {
        if(i%2 == 1)
        {
            printf("%d ", i);
        }
    }
}