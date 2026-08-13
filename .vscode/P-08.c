#include <stdio.h>
int main(){
    float s ;    //s=sum of natural number
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    s=n*(n+1)/2;
    printf("Sum of natural numbers is %.2f",s);
}