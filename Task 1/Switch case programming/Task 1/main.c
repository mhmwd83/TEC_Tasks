#include <stdio.h>

void main(void)
{
    int x;

    printf("Input week number(1-7): ");
    scanf("%d", &x);
      
	switch (x)
	{
	  case 1:
	          printf("Saturday");
			  break;
	  case 2:
	          printf("Sunday");
			  break;
	  case 3:
	          printf("Monday");
			  break;
	  case 4:
	          printf("Tuesday");
			  break;
	  case 5:
	          printf("Wednesday");
			  break;
	  case 6:
	          printf("Thursday");
			  break;
	  case 7:
	          printf("Friday");
			  break;
      default:
	          printf("Wrong Input");
			  break;
	}

}