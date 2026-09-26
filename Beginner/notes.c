#include<stdio.h>
int main(){
    int amount,fivehundred,twohundred,hundred,fifty;
    printf("Enter a amount as u wish:\n");
    scanf("%d",&amount);

    fivehundred=amount/500;//1350/500=2.7
    amount=amount%500;//1350%500=350
    printf("No. of total 500 notes required are :%d\n",fivehundred);

    twohundred=amount/200;//350/200=1.7
    amount=amount%200;//350%200=150
    printf("No. of 200 notes required are:%d\n",twohundred);

    hundred=amount/100;//150/100=1.5
    amount=amount%100;//150%100=50
    printf("No.of 100 notes required are:%d\n",hundred);

    fifty=amount/50;//50/50=1
    printf("No.of 50 notes required are:%d\n",fifty);

    return 0;

}