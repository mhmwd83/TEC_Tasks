#include <stdio.h>

void main(void)
{
    int x, y, z;

    printf("Input first number: ");
    scanf("%d", &x);
	printf("Input second number: ");
    scanf("%d", &y);
    printf("Input third number: ");
    scanf("%d", &z);

    (x>y && x>z) ? printf("Maximum: %d", x):(y > z) ? printf("Maximum: %d", y):printf("Maximum: %d", z);
}