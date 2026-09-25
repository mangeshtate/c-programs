#include<stdio.h>
int main(){
    int x=5;
    x ^=3;//'^='bitwise XOR Assignment operator //x=x^3 here 5=0101,3=0011
       //  XOR gives 1 when the two bits are different.
    printf("%d",x);
    return 0;
}