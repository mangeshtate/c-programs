#include <stdio.h>//Accept numeric char from user and convert into interger type
int main()
{
    char a;
    printf("Enter a one digit Numeric Charater:\n");//works for only one digit number
    scanf("%c",&a);
    a=a-'0';//'0'==>> 48 (ASCII value of char 0)
    printf("Interger type is %d",a);
    return 0;
}