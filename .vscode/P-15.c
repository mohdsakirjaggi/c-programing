#include <stdio.h>
int main(){
    int ch;
    printf("Enter an charactert:\n");
    scanf("%c",&ch);

    //upper case 

    if (ch>='A' && ch<='Z')
        printf("Uppercase Alphabet");
    
        //lower case

        else if(ch>='a' && ch<='z')
        printf("Lowercase Alphabet");

        //digit case
        
        else if(ch>='0' && ch<='9')
        printf("Digit");

        //special character case

        else{
            printf("Special character");
        }
       return 0;
}