//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include <stdio.h>
int main (){
    float l,b,rectangular;
    printf("Enter lenth of rectangular :\n");
    scanf("%f",&l);
    printf("Enter breath of rectangular :\n");
    scanf("%f",&b);
    rectangular=l*b;
    printf("Area of rectangular is %f",rectangular);
    return 0;
}
