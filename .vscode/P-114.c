// Write a program to take a string s as input.The task is to find the length of the longest substring without repeating characters.Print the length as output.

#include <stdio.h>

int main()
{
    char s[1000];
    int last[256];
    int i, start = 0, maxLength = 0;

    scanf("%s", s);

    // Initialize all positions to -1
    for (i = 0; i < 256; i++)
    {
        last[i] = -1;
    }

    for (i = 0; s[i] != '\0'; i++)
    {

        // If character is already in current substring
        if (last[(unsigned char)s[i]] >= start)
        {
            start = last[(unsigned char)s[i]] + 1;
        }

        last[(unsigned char)s[i]] = i;

        // Current substring length
        int length = i - start + 1;

        if (length > maxLength)
        {
            maxLength = length;
        }
    }

    printf("%d", maxLength);

    return 0;
}