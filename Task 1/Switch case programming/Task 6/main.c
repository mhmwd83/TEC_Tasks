#include <stdio.h>

void main(void)
{
    int x;

    printf("Input number:");
    scanf("%d", &x);
      
    switch (x > 0)
    {
        // Num is positive
        case 1:
            printf("%d is positive.", x);
        break;

        // Num is either negative or zero
        case 0:
            switch (x < 0)
            {
                case 1: 
                    printf("%d is negative.", x);
                    break;
                case 0:
                    printf("%d is zero.", x);
                    break;
            }
        break;
    }

}