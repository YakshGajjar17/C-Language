#include <stdio.h>
int main()
{
    int number, firstdigit, lastdigit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    lastdigit = number % 10;
    
    while (number >= 10) 
	{
        number /= 10;
    }
    firstdigit = number;
    
    sum = firstdigit + lastdigit;

    printf("Sum of the first and last digits is: %d\n", sum);

    return 0;
}

