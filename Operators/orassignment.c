#include<stdio.h>
int main(){
    int x=5;
    x|=3;//'|='bitwise OR Assignment operator //x=x|3 here 5=0101,3=0011
       //  OR gives 1 if at least one bit is 1.
    printf("%d",x);
    return 0;
}