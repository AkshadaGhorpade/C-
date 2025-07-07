#include<stdio.h>
int main()
{
	int num1, num2, num3;
	printf("enter first no",num1);
	scanf("%d",&num1);
	printf("enter second no",num2);
	scanf("%d",&num2);
	printf("enter third no",num3);
	scanf("%d",&num3);
	if(num1>num2 && num1>num3 )
	printf("first no is a greater no.");
	else if(num2>num1 && num2>num3 )
	printf("second no is a greater no.");
	else if(num3>num1 && num3>num2 )
	printf("third no is a greater no.");
	return 0;
	
}
