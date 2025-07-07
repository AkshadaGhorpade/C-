#include<stdio.h>
int main()
{
	char operator;
	printf("enter a operator");
	scanf("%c",&operator);
	int num1, num2;
	printf("enter the num1 and num2\n");
	scanf("%d%d",&num1,&num2);
	switch(operator){
		case '+':
			printf("the addition of no. is %d", (num1+num2));
			break;
			case '-'  :
			printf("the sub of no. is %d", (num1-num2));
			break;
			case '*':
			printf("the mul of no. is %d", (num1*num2));
			break;
			case '%':
			printf("the module of no. is %d", (num1%num2));
			break;
			case '/':
			printf("the div of no. is %d", (num1/num2));
			break;
		}
		return 0;
}
		
			
