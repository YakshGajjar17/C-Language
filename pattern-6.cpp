#include <stdio.h>
int main() 
{
  
    // Upper half of the pattern
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("*   ");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (int i = 5 - 1; i >= 1; i--) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("*   ");
        }
        printf("\n");
    }
    return 0;
}

