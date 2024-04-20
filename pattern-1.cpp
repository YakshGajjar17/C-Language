#include <stdio.h>

int main() 
{
    

    for (int i = 1; i <= 5; i++)  //outer for row
	{
        for (int j = 1; j <= i; j++)  //inner for column
		{
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

