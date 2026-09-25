#include<stdio.h>
int main(){
    int x=5;
    x &=3;//'&='bitwise AND Assignment operator //x=x&3 here 5=0101,3=0011
       //  AND gives 1 only when both bits are 1.
    printf("%d",x);
    return 0;
}