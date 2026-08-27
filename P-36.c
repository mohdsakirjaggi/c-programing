// Q36  Write a program to find the HCF(GCD)of two numbers.

#include <stdio.h>
int main()
{
    int a, b, i, HCF = 1;
    printf("Enter first number :\n");
    scanf("%d", &a);
    printf("Enter second number :\n ");
    scanf("%d", &b);
    for (i = 1; i <= i && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            HCF = i;
        }
    }
    printf("HCF is %d", HCF);
}