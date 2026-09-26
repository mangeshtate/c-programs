#include <stdio.h>//Accept num from user and find its 100th placed number
int main(){
    int num,result;
    printf("Enter 3 digit number :");
    scanf("%d",&num);
    result=num/100;
    printf("Hunderedth Place digit is :%d",result);
    return 0;
}