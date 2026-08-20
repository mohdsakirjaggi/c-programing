// Q1. Print your name, college and branch.

/*#include <stdio.h>
int main()
{
    printf("Name-Shakir Jaggi\nCollege-UPES \nBranch-BTECH CSE ");
    return 0;
}*/

// Q2. Input two numbers and find their:

// Sum, Difference, Product, Quotient

/*#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers :\n");
    scanf("%d  %d ", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Diffrence = %d\n", a - b);
    printf("Product = %d\n ", a * b);
    printf("Quotient = %d\n", a / b);
    return 0;
}*/

// Q3. Input radius and calculate area of a circle.

/*#include <stdio.h>
int main()
{
    float radius, PI = 3.14, Area;
    printf("Enter radius of circle \n");
    scanf("%f", &radius);
    Area = PI * radius * radius;
    printf("The area of circle is %f", Area);
    return 0;
}*/

// Q4. Input principal, rate and time and calculate Simple Interest.

/*#include <stdio.h>
int main()
{
    float p, r, t, si; // si=simple interest
    printf("Enter principle , rate ,time :\n");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %f", si);
    return 0;
}*/

// Q5. Swap two numbers using a third variable.

/*#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two value a and b\n");
    scanf("%d  %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping \n a=%d \n b = %d", a, b);
    return 0;
}*/

// Q6. ⭐ Challenge: Swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two values a and b \n");
    scanf("%d %d  ", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping \n a = %d \n b = %d");
    return 0;
}