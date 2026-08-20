// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main()
{
    int month;
    printf("Enter the month number(1-12)  :\n");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("Month -January \nDays_31 ");
        break;
    case 2:
        printf("Month - Febuary \nDays - 28");
        break;

    case 3:
        printf("Month - March \nDays  - 31 ");
        break;

    case 4:
        printf("Month - April \nDays - 30 ");
        break;

    case 5:
        printf("Month - May \nDays - 31  ");
        break;

    case 6:
        printf("Month - Jun \nDays - 30");
        break;

    case 7:
        printf("Month - July \nDays -31 ");
        break;

    case 8:
        printf("Month - August \nDays - 31 ");
        break;

    case 9:
        printf("Month - September \nDays - 30 ");
        break;

    case 10:
        printf("Month - October  \nDays -31 ");
        break;

    case 11:
        printf("Month - November \nDays -30 ");
        break;

    case 12:
        printf("Month - December \nDays - 31 ");
        break;

    default:

        printf("The number is not between 1-12");
    }
    return 0;
}