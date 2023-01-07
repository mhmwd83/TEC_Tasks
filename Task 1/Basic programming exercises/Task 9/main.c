#include<stdio.h>

void main(void)
{
   int days, year, week, day;
   
   printf("Enter days: ");
   scanf("%d", &days);

    year = days / 365;
	week = (days - (year * 365)) / 7;
	day = days - ((year * 365) + (week * 7));

    printf("%d days = %d year/s, %d week/s and %d day/s\n", days, year, week, day);


}