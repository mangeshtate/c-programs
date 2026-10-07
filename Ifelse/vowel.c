#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet from a-z or A-Z:\n");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
        printf("This is Vowel");
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("This is Consonant");
    }
    else{
        printf("Enter Valid Alphabet");
    }
    return 0;
}