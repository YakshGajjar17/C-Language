#include <stdio.h>

int main() 
{
    int leapyear;
    
    printf("Enter a year: ");
    scanf("%d", &leapyear);
    
    if ((leapyear % 4 == 0 && leapyear % 100 != 0) || (leapyear % 400 == 0)) 
	{
        printf("%d is a leap year.\n", leapyear);
    } 
	else 
	{
        printf("%d is not a leap year.\n", leapyear);
    }

    return 0;
}

