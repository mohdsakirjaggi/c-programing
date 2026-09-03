// Write a program to print the following pattern :
/*
 *****
 ****
 ***
 **
 *
 */
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        // Print spaces
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
