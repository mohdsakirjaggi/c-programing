// Day 2 Problems

// Q1. Check whether a number is positive, negative or zero.

/*#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("The number is Positive");
    }
    else if (a == 0)
    {
        printf("The number is Zero");
    }
    else
    {
        printf("The number is Negative");
    }
}*/

// Q2. Check whether a number is even or odd.

/*#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }
    return 0;
}*/

// Q3. Find the largest of two numbers.

/*#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers a and b:\n");
    printf("%d %d", &a, &b);
    if (a > b)
    {
        printf("Largest is a", a);
    }
    else
    {
        printf("Largest is b ", b);
    }
    return 0;
}*/

// Q4. Find the largest of three numbers.

/*#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three number a , b  and c:\n");
    if (a > b && a > c)
    {
        printf("The number a is largest");
    }
    else if (b > a && b > c)
    {
        printf("The number b is largest");
    }
    else
    {
        printf("The number c is largest");
    }
    return 0;
}*/

// Q5. Check whether a person is eligible to vote based on age.

/*#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age :\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You can vote!");
    }
    else
    {
        printf("You can't vote!");
    }
    return 0;
}*/

// Q6. ⭐ Challenge: Check whether a given year is a leap year.

/*#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d", &year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap year!");
    }
    else
    {
        printf("Not a leap year!");
    }
    return 0;
}*/