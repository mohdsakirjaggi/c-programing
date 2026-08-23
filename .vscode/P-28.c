// Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main()
{
    int i, n, product = 1;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            product *= i;
        }
    }
    printf("The product of even numbers is %d", product);
    return 0;
}