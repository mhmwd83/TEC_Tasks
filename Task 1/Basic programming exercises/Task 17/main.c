#include<stdio.h>
#include<math.h>
void main (void)
{
	float principle, time, rate, interest;
	float eng, phy, chem, math, comp ,total;
	
	printf("Enter principle (amount): ");
	scanf("%f", &principle);
	printf("Enter time: ");
	scanf("%f", &time);
	printf("Enter rate: ");
	scanf("%f", &rate);
	  
    interest = principle* pow((1 + rate/100), time);
	
	printf("Compound Interest = %f\n", interest);

}
