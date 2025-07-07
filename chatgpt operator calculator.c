#include <stdio.h>

int main() {
    int num1, num2;
    char operatar;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", & operatar);
    printf("Enter the first number: ");
    scanf("%d", &num1);
	printf("Enter the second number: ");
    scanf("%d", &num2);
    if (operatar == '+') 
	{
        printf("%d + %d=%d\n", num1, num2, num1 + num2);
    } 
	else if (operatar == '-') {
        printf("%d - %d= %d, num1, num2, num1 - num2);
    } else if (operatar == '*') {
        printf("%d * %d= %d\n", num1, num2, num1 * num2);
    } else if (operatar == '/') {
        if (num2 /= 0) {
            printf("%d / %d= %d", num1, num2, num1 / num2);
        } 
    else {
        printf("Invalid operator \n");
    }

    return 0;
}






