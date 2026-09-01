// Write a program to print the following pattern:
/* ***
***
***
***
*** */
#include <stdio.h>

int main()
{
    int rows, columns, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}