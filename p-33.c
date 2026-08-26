// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main()
{
    int n, rem, original, sum = 0;
    printf("Enter number n:\n");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (original == sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }

    return 0;
}