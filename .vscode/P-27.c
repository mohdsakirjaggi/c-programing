// Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main()
{
    int n, sum = 0, i;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (2 * i - 1);
    }
    printf("Sum of first n odd numbers is= %d", sum, n);

    return 0;
}