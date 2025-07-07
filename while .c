#include<stdio.h>
int main()
{
	int num;
	int factorial =1;
	int i=1;
	printf("enter the number");
	scanf("%d",&num);
	while(i<=num)
	{
		factorial*=num;
		num--;
	}
	printf("factorial of the number you entered is %d");
	return 0;
}

