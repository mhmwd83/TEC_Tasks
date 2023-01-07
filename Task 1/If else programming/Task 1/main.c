#include <stdio.h>

void main(void)
{
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);
	printf("Enter second number: ");
    scanf("%d", &y);

    if(x >y)
        printf("Maximum is %d", x);
    else
        printf("Maximum is %d", y);
}