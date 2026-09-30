#include<stdio.h>//accept a number from user and find if its +ve,-ve or 0 using if/else 
int main()
{
    int a;
    printf("Enter Value of a:");
    scanf("%d",&a);
    if (a>0){
        printf("A is positive number..\n");
    }
    else if(a<0){
        printf("a is negative number..\n");
    }
    else{
        printf("a is zero\n");
    }
    return 0;
}