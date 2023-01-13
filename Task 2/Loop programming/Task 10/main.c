#include<stdio.h>

void main(void)
{
	int x, sum=0;
	printf("Input num: ");
	scanf("%d", &x);

    while(x !=0)
    {
	   x = x/10;  //35419--- 3541 --- 354 --- 35 --- 3 --- 0
	   sum ++;
    }
	printf("Number of digits: %d", sum);
}