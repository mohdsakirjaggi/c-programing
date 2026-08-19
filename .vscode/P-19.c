// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the three sides of triangle:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == b && b == c)
        printf("The triangle is Equilateral");

    else if (a == b || b == c)
        printf("The  triangle is Isosceles");

    else
    {
        printf("The triangle  is Scalene");
    }

    return 0;
}