#include<stdio.h>

void main (void)
{
	float principle, time, rate, interest;
	float eng, phy, chem, math, comp ,total;
	
	printf("Enter principle: ");
	scanf("%f", &principle);
	printf("Enter time: ");
	scanf("%f", &time);
	printf("Enter rate: ");
	scanf("%f", &rate);
	  
    interest = (principle*time*rate)/100;
	
	printf("Simple Interest = %f\n", interest);

}
