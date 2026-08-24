// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main()
{
    int n, fact = 1, i;
    printf("Enter the number n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("fact=%d", fact);
    return 0;
}