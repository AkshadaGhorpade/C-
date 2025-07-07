#include<stdio.h>
int main()
{
	int first_term=0, second_term=1,num;
	int next_term=first_term+second_term;
	printf("enter the no. for a limit ");
	scanf("%d",&num);
	printf("%d%d",first_term,second_term);
	for (int i=3; i<=num; i++)	
    {
    	printf("%d",next_term);
    	first_term=second_term;
    	second_term=next_term;
    	next_term=first_term+second_term;
	}
	
	return 0;
	
}
