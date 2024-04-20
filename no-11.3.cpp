#include <stdio.h>

int main() 
{
    int num, i, range;

    
    printf("Enter the number for which you want to print the table: ");
    scanf("%d", &num);

    
    printf("Enter the range of the table: ");
    scanf("%d", &range);

    
    printf("Multiplication table for %d upto %d:\n", num, range);
    for(i = 1; i <= range; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

