#include <stdio.h>
int main(){
     float fehrehnit,c;                                       //c=celcius
    printf("Enter the value of celcius to convert fehrehnit:\n");
    scanf("%f",&c);
    fehrehnit=9.0/5.0*c+32;       
    printf("The value of fehrehnit is %.2f\n",fehrehnit);
    return 0;
}