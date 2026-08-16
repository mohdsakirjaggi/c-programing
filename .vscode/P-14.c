#include <stdio.h>

int main() {
    char ch;    //ch=character

    printf("Enter a character: \n");
    scanf(" %c", &ch);

    //vowels  and consonants concept

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character is a Vowel");
    }
    else {
        printf("The character is a Consonant");
    }

    return 0;
}


