#include <stdio.h>

void main(void)
{
    int x, y;

    printf("Input first number: ");
    scanf("%d", &x);
	printf("Input second number: ");
    scanf("%d", &y);

    (x>y) ? printf("Maximum: %d", x): printf("Maximum: %d", y);

}