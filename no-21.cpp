#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) 
{
    if (n == 0 || n == 1) 
	{
        return 1;
    } 
	else 
	{
        return n * factorial(n - 1);
    }
}

int main() 
{
    int num, fact;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) 
	{
        printf("Factorial of negative numbers is not defined.\n");
    } 
	else 
	{
        fact = factorial(num);
        printf("Factorial of %d is: %d\n", num, fact);
    }

    return 0;
}

