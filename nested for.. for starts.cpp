#include<stdio.h>
int main ()
{
	int num;
	printf("enter the number of row of triangle");
	scanf("%d",&num);
	for(int i=1; i<=num; i++)
	{
		for(int j=1; j<=num; j++)
		printf("*\n");
	}
	return 0;
}
