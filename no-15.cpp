#include <stdio.h>

int main() 
{
    int number, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) 
	{
        int digit = number % 10;
        if (digit > maxDigit) 
		{
            maxDigit = digit;
        }
        number /= 10;
    }

    printf("The maximum digit in the number is: %d\n", maxDigit);

    return 0;
}

