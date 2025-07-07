#include<stdio.h>
int main()
{
	char operatar;
	int num1, num2,add,sub,mul,div,mod;
	printf("*********operator calculator************\n");
	printf("Enter an operatar (+, -, *, /,%)\n");
	scanf(" %c", & operatar);
	printf("enter the num1\n", num1); 
	scanf("%d", & num1);
	printf("enter the num2\n", num2);
	scanf("%d", & num2);
	if(operatar == '+')
	{
	printf("the addition of a num1 and num2 is %d\n",(num1+num2));
    }  
    else if(operatar=='-')
	{
	printf("the subtraction of a num1 and num2 is %d",(num1-num2));
    }  
    else if(operatar == '/')
	{
	printf("the divisin of a num1 and num2 is %d",(num1/num2));
    }  
    else if(operatar == '*')
	{
	printf("the multiplication of a num1 and num2 is %d",(num1*num2));
    }  
    else if(operatar == '%')
	{
	printf("the modulus of a num1 and num2 is %d",(num1%num2));
    }  
    return 0;	
}
