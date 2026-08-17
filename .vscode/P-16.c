#include <stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THREE NUMBER :\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    printf("The number of a = %d is largest",a);

    else if(b>a && b>c)
    printf("The number of b = %d is largest",b);

    else{
        printf("The number of c = %d is largest",c);
    }
    return 0;
}