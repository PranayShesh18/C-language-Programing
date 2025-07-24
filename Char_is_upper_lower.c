#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Character is in Upper Case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Character is in Lower Case");
    }
    else
    {
        printf("You did not enter an alphabet character");
    }

    return 0;
}
