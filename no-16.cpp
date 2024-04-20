#include <stdio.h>

int main() 
{
    int number, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) 
	{
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of the digits of the number is: %d\n", sum);

    return 0;
}

