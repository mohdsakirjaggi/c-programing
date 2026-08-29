// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main()
{
    int n, digit, result = 0, complement, place = 1;
    printf("Enter a binary number:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        if (digit == 0)
            complement = 1;
        else
            complement = 0;
        result = result + complement * place;
        n = n / 10;
        place = place * 10;
    }
    printf("1's complement is %d", result);
    return 0;
}