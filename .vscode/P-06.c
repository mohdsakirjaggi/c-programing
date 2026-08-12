#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number :\n");
    scanf("%d",&a);
    printf("Enter b number :\n");
    scanf("%d",&b);
    printf("Enter c number :\n");
    scanf("%d",&c);
    //Swapping logic using third level 'c'
    c=a;
    a=b;
    b=c;
    printf("After Swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
