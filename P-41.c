// Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main()
{
    int n, first, last, temp, place = 1, middle, result;

    printf("Enter a number:\n ");
    scanf("%d", &n);

    temp = n;

    // Find last digit
    last = n % 10;

    // Find first digit and place value
    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    // Remove first and last digit
    middle = (n % place) / 10;

    // Swap first and last digits
    result = last * place + middle * 10 + first;

    printf("After swapping = %d", result);

    return 0;
}