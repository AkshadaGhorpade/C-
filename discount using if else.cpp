#include<stdio.h>
int main()
{
	char operatar;
	int num1, num2;
	printf("*********operator calculator************/n");
	printf("Enter an operator (+, -, *, /,%)");
	scanf(" %c", & operatar);
	printf("enter the num1", num1);
	scanf("%d", & num1);
	printf("enter the num2", num2);
	scanf("%d", & num2);
	if( == '+')
	{
	printf("the addition of a num1 and num2 is %d",addition);
    }  
    else if(operator == '-')
	{
	printf("the subtraction of a num1 and num2 is %d",subtraction);
    }  
    else if(/)
	{
	printf("the divisin of a num1 and num2 is %d",division);
    }  
    else if(operator == '*')
	{
	printf("the multiplication of a num1 and num2 is %d",multiplication);
    }  
    else if(operator == '%')
	{
	printf("the modulus of a num1 and num2 is %d",modulus);
    }  
    return 0;	
}
