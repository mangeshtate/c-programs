#include <stdio.h>
int main(){
    int x=10;//simple assignment operator "=" means equality/comparation
    printf("%d\n",x);
    printf("%d\n",x+=4);//Addition Assignment -x=x+4 //14
    printf("%d\n",x-=5);//Subtraction Assignment x=x-5 //14-5=9
    printf("%d\n",x*=3);//Mutiplication Assignment x=x*3 //9*3=27
    printf("%d\n",x/=3);//Division Assignment x=x/3 //27/3=9
    printf("%d\n",x%=3);//Modulus Assignment x=x%3 //9%3=0
    return 0;
}