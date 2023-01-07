#include <stdio.h>

void main(void)
{
    int x;

    printf("Input number:");
    scanf("%d", &x);
      
    switch(x% 2)
    {
        /* If n%2 == 0 */
        case 0: 
            printf("Number is Even");
            break;

        /* Else if n%2 == 1 */
        case 1: 
            printf("Number is Odd");
            break;
    }

}