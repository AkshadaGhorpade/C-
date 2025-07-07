#include<stdio.h>
int main()
{
	int first_term=0, second_term=1, next_term;
	do{
		printf("enter the first_term and second_term ");
		scanf("%d%d", &first_term,&second_term);
		next_term=first_term+second_term;	
    }
	while(next_term!=0);
	printf("%d",next_term);
	return 0;
	
}
