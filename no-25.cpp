#include <stdio.h>

// Function to reverse a string
void reverseString(char *str) 
{
    char *end = str;
    char tmp;

    if (str) 
	{
        while (*end) 
		{
            ++end;
        }
        --end; 

        // Swap characters from start and end
        while (str < end) 
		{
            tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
}

// to check if a string is palindrome
bool isPalindrome(const char *str) 
{
    int length = 0;
    const char *start = str;
    const char *end = str;

    // Find the length of the string
    while (*end != '\0') 
	{
        length++;
        end++;
    }
    end--; 

    // Check for palindrome
    while (start < end) {
        if (*start != *end) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }

    return true; // It's a palindrome
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    if (isPalindrome(str)) 
	{
        printf("The string is a palindrome.\n");
    } 
	else 
	{
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

