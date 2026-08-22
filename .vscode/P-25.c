// Write a program to implement a basic calculator using switch-case for +, -, *, /.
#include <stdio.h>
int main()
{
    float a, b, result;
    char op;
    printf("Enter two numbers\n");
    scanf("%f", &a);
    printf("Enter operator (+,-,*,/):\n");
    scanf(" %c", &op);
    printf("Enter second number\n");
    scanf("%f", &b);
    switch (op)
    {
    case '+':

        printf("result=%.2f", a + b);
        break;

    case '-':

        printf("result=%.2f", a - b);
        break;
    case '*':

        printf("result=%.2f", a * b);
        break;
    case '/':
        if (b != 0)
            printf("result=%.2f", a / b);
        else
            printf("Can not be divide by zero");

        break;

    default:
        printf("Invalid operator");
    }
    return 0;
}