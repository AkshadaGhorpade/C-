#include<stdio.h>
int main()
{
	int sub1, sub2, sub3;
	float total_marks, percentage;
	printf("enter the marks of sub1\n", sub1);
	scanf("%d", &sub1);
	printf("enter the marks of sub2\n", sub2);
	scanf("%d", &sub2);
	printf("enter the marks of sub3\n", sub3);
	scanf("%d", &sub3);
	total_marks=sub1+sub2+sub3;
	printf("total of your marks is %f\n",total_marks);
	percentage= (total_marks/300)*100;
	printf("your percentage is %f\n", percentage);
	if (percentage>=90)
	printf("congratulations you got O grade");
	else if (percentage>=80)
	printf("congratulations you got A grade");
	else if (percentage>=40)
	printf("you got C grade");
	else 
	printf("INVALID INPUT");
	return 0;	
}
