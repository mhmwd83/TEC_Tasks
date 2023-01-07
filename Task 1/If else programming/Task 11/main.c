#include<stdio.h>
 
void main (void)
{
	int x;
	
	printf("Input week number: ");
	scanf("%d", &x);
	
    if(x == 1)
        printf("Saturday");
	else if(x == 2)
        printf("Sunday");
    else if(x == 3)
        printf("Monday");
    else if(x == 4)
        printf("Tuesday");
	else if(x == 5)
        printf("Wednesday");
	else if(x == 6)
        printf("Thursday");
    else if(x == 7)
        printf("Friday");
	else
        printf("Invalid Input! Please enter week number between 1-7.");
}
