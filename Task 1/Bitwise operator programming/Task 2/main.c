#include <stdio.h>

void main(void)
{
    int x, msb;

    printf("Enter any number: ");
    scanf("%d", &x);

    msb = 1 << 7;

    if(x & msb)
        printf("MSB of %d is set (1).", x);
    else
        printf("MSB of %d is unset (0).", x);
}