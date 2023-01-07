#include <stdio.h>

void main(void)
{
    int x, y;

    printf("Input first number:");
    scanf("%d", &x);
	
	printf("Input second number:");
    scanf("%d", &y);
      
    switch(x > y)
    {   
        /* If condition (num1>num2) is false */
        case 0: 
            printf("%d is maximum", y);
            break;

        /* If condition (num1>num2) is true */
        case 1: 
            printf("%d is maximum", x);
            break;
    }

}