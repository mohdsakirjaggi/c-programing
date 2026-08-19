//practice program to find area of square
/*
#include <stdio.h>
int main(){
    int l;
    printf("Enter the side of square \n");
    scanf("%d",&l);
    printf("The area of square is %d\n",l*l);
    return  0;
}*/

//practice program to find area of circle
/*#include <stdio.h>
int main(){
    float r,pi=3.14;
    printf("Enter the radius of circle \n");
    scanf("%f",&r);
    printf("The area of circle is %f\n",pi*r*r);
    return 0;
}*/


/*#include <stdio.h>
int main(){
    printf("5%2=%d\n",5%2);
    printf("-5%2=%d\n",-5%2);
    printf("5%-2=%d\n",5%-2);
    printf("-5%-2=%d\n",-5%-2);

}*/


#include <stdio.h>
#include <stdbool.h>
int main() {
int a;
printf("Size of int = %zu bytes \n",sizeof(int));
printf("Size of int_a= %zu bytes\n",sizeof(a));
printf("Size of short= %zu bytes \n",sizeof (short));
printf("Size of long= %zu bytes\n",sizeof(long));
printf("Size of char = %zu byten",sizeof(char)); // Always 1
_Bool boolVar = 0;
_Bool boolVar1 = 10;
_Bool boolVar2 = -50; printf ("boolVar = %i\n",boolVar);
printf ("boolVarl = 8i\n", boolVar1);
printf ("boolVar2 = 8i\n*", boolVar2);
printf("Size of bool= %zu bytes\n", sizeof(_Bool));
    return 0;
}