// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     puts("Enter a string");
//     gets(str);
//     puts("The reverse is :");
//     puts(str); // atuomatically \n bhi de deta h
//     int size = 0;
//     int i = 0;
//     while (str[i] != '\0')
//     {

//         i++;
//     }
//     size = i;
//     for (int i = 0, j = size - 1; i <= j; i++, j--)
//     {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }

//     printf("%d\n", size);
//     printf("%s", str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    puts("Enter a string");
    gets(str);
    int size = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    size = i;
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s", str);
    printf("%d", size);
    return 0;
}