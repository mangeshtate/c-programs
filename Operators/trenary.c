#include <stdio.h>
int main()
{
    int age;
    printf("Enter user age:\n");
    scanf("%d",&age);
    age=(age>18)?printf("Adult"):printf("Not Adult");//Ternary Operator(Short hand if else) -synatax var=(condtiion)?if true :if False expression
    return 0;
}