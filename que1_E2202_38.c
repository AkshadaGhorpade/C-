#include <stdio.h>
int main() {
    long long binary_No;
    int decimal_Number = 0, i = 0, remainder;
    printf("Enter a binary number ");
    scanf("%lld", &binary_No);

    while (binary_No != 0) 
	{
        remainder = binary_No % 10;
        decimal_Number += remainder * pow(2, i);
        binary_No /= 10;
        i++;
    }
    printf("Decimal number is %d\n", decimal_Number);
    return 0;
}

