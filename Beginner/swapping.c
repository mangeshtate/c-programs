#include <stdio.h>//swaping without using 3rd variable
int main(){
    int a,b;//4,5
    printf("Enter value of a:\n");
    scanf("%d",&a);//4
    printf("Enter value of b:\n");
    scanf("%d",&b);//5
    a=a+b;//a=4+5//a=9
    b=a-b;//b=9-5//b=4
    a=a-b;//a=9-4//a=5

    printf("After swapping a=%d,b=%d respectively.\n",a,b);


    return 0;
}