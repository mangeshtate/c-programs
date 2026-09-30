#include <stdio.h>//Finding SI using time ,principle,rate of interest
int main(){
    int amt;
    float roi,s,t;
    printf("Enter principal amount:\n");
    scanf("%d",&amt);
    printf("Enter rate of interest:\n");
    scanf("%f",&roi);
    printf("Enter time in months:\n");
    scanf("%f",&t);
    t=t/12;//months converted into year of time
    s=(amt*roi*t)/100;
    printf("Simple Interest is :%.2f",s);
    return 0;
}