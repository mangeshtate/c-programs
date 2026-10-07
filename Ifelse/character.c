#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any valid Character:\n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("Small Character");
    }
    else if(ch>=48 && ch<=57){
        printf("Numeric Character");
    }
    else if(ch>=65 && ch<=90){
        printf("Capital Character");
    }
    else{
        printf("Symbolic Character");
    }
    return 0;
}