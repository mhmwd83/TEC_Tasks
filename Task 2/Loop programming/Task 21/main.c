/**
 * C program to find power of a number using for loop
 */

#include <stdio.h>

int main()
{
    int x, y, result=1;
    printf("Input base: ");
	scanf("%d", &x);
	printf("Input exponent: ");
	scanf("%d", &y);


    for(int i=0; i<y; i++) 
    {
      result = result*x;
    }
	printf("%d ^ %d = %d\n", x, y, result);

    return 0;
}