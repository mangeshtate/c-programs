#include<stdio.h>//Swapping of 2 variables values using 3 variables
int main(){
    int a,b,c=0;
    printf("Enter Value of a:\n");
    scanf("%d",&a);//a=8
    printf("Enter Value of b\n");
    scanf("%d",&b);//b=9
    c=a;
    printf("Value of new c is:%d\n",c);//c=8

    a=b;
    printf("Value of new a is :%d\n",a);//a=9

    b=c;
    printf("Value of new b is:%d\n",b);//b=8

    printf("After swapping a and b are %d,%d respectively\n",a,b);
    return 0;
}