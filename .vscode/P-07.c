#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a :\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    //swapping
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swap value:\n a= %d\n b =%d",a,b);
    return 0;
}