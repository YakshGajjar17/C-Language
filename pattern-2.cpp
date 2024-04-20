#include <stdio.h>

int main() 
{
    

    for (int i = 1; i <= 5; i++) 
	{
        char ch = 'A'; // Start with 'A' for each row
        for (int j = 1; j <= i; j++) 
		{
            printf("%c", ch);
            ch++; // Increment the character for every etration
        }
        printf("\n");
    }

    return 0;
}

