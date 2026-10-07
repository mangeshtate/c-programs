#include <stdio.h>//finding max from 3 numbers using nested if
int main()
{
    int a,b,c;
    printf("Enter Value of a:\n");
    scanf("%d",&a);
    printf("Enter Value of b:\n");
    scanf("%d",&b);
    printf("Enter Value of c:\n");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is max");
        }
        else{
            printf("c is max");
        }
    }
    else{
        if(b>c){
            printf("b is max");
        }
        else{
            printf("c is max");
    }
    }
    return 0;
}