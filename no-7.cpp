#include <stdio.h>

int main() 
{
    double num1, num2, result;
    char operation;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operation);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(operation) 
	{
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if(num2 != 0) 
			{
                result = num1 / num2;
            } 
			else 
			{
                printf("Error: Division by zero\n");
                return 1; 
            }
            break;
        case '%': 
            if(num2 != 0) 
			{
                result = (int)num1 % (int)num2;
            } 
			else 
			{
                printf("Error: Modulo by zero\n");
                return 1; 
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; 
    }

    printf("%lf %c %lf = %lf\n", num1, operation, num2, result);

    return 0;
}

