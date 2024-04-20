#include <stdio.h>

int main() 
{
    float num1, num2, result;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) 
	{
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) 
			{
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } 
			else 
			{
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("*****ERROR*****\n");
    }

    return 0;
}

