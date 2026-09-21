// Reverse a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, length = 0;

    fgets(str, sizeof(str), stdin);

    // Find length
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Print in reverse
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}