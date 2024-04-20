#include <stdio.h>

int main() 
{
    char vol;

    printf("Enter a character: ");
    scanf("%c", &vol);

    switch(vol) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        
            printf("%c is a vowel.\n", vol);
            break;
        default:
            printf("%c is a consonant.\n", vol);
            break;
    }

    return 0;
}

