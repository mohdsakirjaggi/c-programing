#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,si,a,ci; // a=amount
    printf("Enter principal ,rate and time:\n");
    scanf("%f %f %f",&p,&r,&t);
    //Simple interst
    si=p*r*t/100;
    //Compound interest
    a=p*((1+r/100),t);
    ci=a-p;
    printf("Simple interest = %.2f\n Compound interest = %f",si,ci);
    

    return 0;
   
}