/*QUESTION-1
 Given an array of marks of students, if the mark of any student is less than 35 print its roll number.
  [roll number here refers to the index of the array.]
#include <stdio.h>
int main()
{
    int marks[10;] = {56, 34, 79, 76, 4, 99, 80, 56, 32, 17};
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            prinf("%d", i);
        }
    }
    return 0;
}*/

/* QUESTION-2
 sum of array
#include <stdio.h>
int main()
{
    int arr[5] = {5, 22, 6, 46, 2};
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + arr[5];
    }
    printf("%d", sum);
    return 0;
}*/

/* input user
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for (int i = 0; i <= n; i++)
    printf("%d ", arr[i]);
}*/

/* find the maximum value out of all the elements
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d", &n);
    int arr[n];

    int max = arr[0] / -1; // sabse chhota number
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if (max < arr[i])
            max = arr[i];
    }
    printf("max array is %d", max);
}*/

/*give an array of integers,change the value of aal odd indexed elements of its second multiple and increment all even indexed value by 10
#include <stdio.h>
int main()
{
    int arr[5] = {5, 3, 6, 7, 2};
    for (int i = 0; i <= 4; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] = arr[i] * 2;
        }
        else
            arr[i] = arr[i] + 10;
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
}*/

/* count the number of element in given array greater than a given number x
#include <stdio.h> not complete
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int arr[7] = {4, 3, 6, 3, 6, 34, 23};
    int count = 0;
    for (int i = 0; i <= 6; i++)
    {

        if (n < arr[i])
            count++;
    }
    printf("%d ", arr[i]);
    return 0;
}*/

/* find the difference between the sum of elements at even indices to the sum of elements at odd indices
#include <stdio.h>
int main()
{
    int sumeven = 0;
    int sumodd = 0;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0)
        {
            sumeven += arr[i];//even=2+4+6=12
        }
        else
            sumodd += arr[i];//odd=1+3+5+7=16
    }
    printf("%d", sumeven - sumodd);//result=16-12=4
    return 0;
}*/

/*Find the total number of pairs in the array whose sum is equal to the given value x
#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int totalpairs = 0;
    int x = 12;
    for (int i = 0; i <= 7; i++)
        for (int j = i + 1; j <= 7; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpairs++;
                printf("(%d , %d)", arr[i], arr[j]);
            }
        }
    printf("%d", totalpairs);
    return 0;
}*/

/* for triplate
#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int totalpairs = 0;
    int x = 12;
    for (int i = 0; i <= 7; i++)
        for (int j = i + 1; j <= 7; j++)
            for (int k = j + 1; k <= 7; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    totalpairs++;
                    printf("(%d , %d ,  %d)\n", arr[i], arr[j], arr[k]);
                }
            }
    printf("%d", totalpairs);
    return 0;
}*/

/* Find the second largest element in the given array
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {-10, -4, -200, -80, -19, -5, -12};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <= 6; i++)
    {
        if (max < arr[i])
            max = arr[i];
    } // input =-1
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }
    printf("%d", smax);
    return 0;
}*/

/*Write a program to copy the contents of one array into another in the reverse order
#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int brr[8];
    for (int i = 0; i <= 7; i++)
    {
        brr[i] = arr[7 - i];
    }
    for (int i = 0; i <= 7; i++)
        printf("%d ", brr[i]);
}*/

/* Write a program to reverse the array without using any extra arary
#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (int i = 7; i >= 0; i--)
    {
    }
    for (int i = 7; i >= 0; i--)
        printf("%d ", arr[i]);
}*/

// HW-if an array arr contains n elements then check if the given array is a palidronme or not

/* Rotate the given array 'a'by k steps ,where k is non negative 'a'
NOTE - k can be greater than n as well where n is the size of array 'a'
#include <stdio.h>
    int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 1, j = 4; i <= j; i++, j--)
    {
        int tem = arr[i];
        arr[i] = arr[j];
        arr[j] = tem;
    }
    for (int i = 0; i <= 7; i++)
    {
    }
    for (int i = 0; i <= 7; i++)
        printf("%d ", arr[i]); // output=1 5 4 3 2 6 7 8
    return 0;
     printf("%d is present in the array and its index is %d", x, i);
}
*/

// Given an array containing element from 1 to 100 except one element in the range is missing .find the missing element
#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 4;
    int check = 0; // 0 means the element is not present
    for (int i = 0; i <= 7; i++)
    {
        if (arr[i] == x)
        {
            int check = 1; // means the element is  present
            break;
        }
        if (check == 0)
            printf("%d is not present in the array  ", x);
        else
            printf("%d is present in the array  ", x);
    }
    // for (int i = 7; i >= 0; i--)
    //   printf("%d ", arr[i]);
}

// Wap to find a duplicate element from a  given array of integers

// Find the unique number in a given array where all the element are being repreated twice with one value being unique