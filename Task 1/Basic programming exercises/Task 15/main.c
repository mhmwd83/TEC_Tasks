#include<stdio.h>
 
void main (void)
{
	float percentage, average;
	float eng, phy, chem, math, comp ,total;
	
	printf("Enter marks of five subjects: ");
	scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);
	  
    total = eng + phy + chem + math + comp;
	average = total/5;
	percentage = (total/500)*100;
	
	printf("Total = %0.2f\n", total);
	printf("Average = %0.2f\n", average);
	printf("Percentage = %0.2f\n", percentage);
}
