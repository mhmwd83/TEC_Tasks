#include <stdio.h>

void main(void)
{
    int x, y, z;

    printf("Enter first number: ");
    scanf("%d", &x);
	printf("Enter second number: ");
    scanf("%d", &y);
	printf("Enter third number: ");
    scanf("%d", &z);

    if(x >y && x>z)
        printf("Maximum is %d", x);
    else if(y>z)
        printf("Maximum is %d", y);
	else
        printf("Maximum is %d", z);
}