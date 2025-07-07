#include<stdio.h>
int main()
{
	int month;
	printf("enter a no. of a month");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("jan");
			break;
			case 2:
			printf("fab");
			break;
			case 3:
			printf("march");
			break;
			case 4:
			printf("apr");
			break;
			case 5:
			printf("may");
			break;
			case 6:
			printf("jun");
			break;
			case 7:
			printf("jul");
			break;
			case 8:
			printf("aug");
			break;
			case 9:
			printf("sep");
			break;
			case 10:
			printf("oct");
			break;
			case 11:
			printf("nov");
			break;
			case 12:
			printf("dec");
			break;
			default :
			printf ("there are only 12 months in a year");
	}
	return 0;
	
}

