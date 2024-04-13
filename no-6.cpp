#include <stdio.h>

int main() 
{
    int choice;
    double value;

    printf("Choose conversion:\n");
    printf("1. Years to Days\n");
    printf("2. Days to Years\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1:
            printf("Enter number of years: ");
            scanf("", &value);
                        
            value = 365;
            printf(" years =  days\n", value / 365, value);
            break;
        
        case 2:
            printf("Enter number of days: ");
            scanf("", &value);
                        
            printf(" days =  years\n", value, value / 365);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

