#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 
void main(void)
{
    int num, count, i;
    printf("Enter any number: ");
    scanf("%d", &num);

    count = 0;
    for(i=0; i<INT_SIZE; i++)
    {
        if((num >> i ) & 1)
        {
            break;
        }
        count++;
    }

    printf("Total number of trailing zeros in %d is %d.", num, count);

}