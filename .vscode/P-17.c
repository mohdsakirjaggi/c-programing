//Q17: Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>
int main(){
float  a,b ,c ,d, r1,r2;
printf("Enter the value of a \n");
scanf("%f",&a);
printf("Enter the value of b \n");
scanf("%f",&b);
printf("Enter the value of c \n");
scanf("%f",&c);

//Discriment formula

d=b*b-4*a*c;

//Roots condition

if(d>0){
    printf("Roots are Real and Distinct");
}
    else if(d==0){
        printf("Roots are Real and Equal");
    }
    else if(d<0){
        printf("Roots are No real /complex ");
    }
    else{
        printf("Invalid input");
    }


}