/**
 * C program to find power of a number using recursion
 */

#include <stdio.h>


/* Power function declaration */
double power_fun(double base, int expo);


int main()
{
    double base, power;
    int expo;
    
    /* Input base and exponent from user */
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);
    
    // Call pow function
    power = power_fun(base, expo); 
    
    printf("%.2lf ^ %d = %f", base, expo, power);
    
    return 0;
}


/**
 * Calculate power of any number.
 * Returns base ^ expo
 */
double power_fun(double base, int expo)
{
    /* Base condition */
    if(expo == 0)
        return 1;
    else if(expo > 0)
        return base * power_fun(base, expo - 1);
    else
        return 1 / power_fun(base, -expo);
}