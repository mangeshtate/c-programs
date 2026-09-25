#include<stdio.h>
int main(){
    int x=5;
    x >>=3;//'>>='bitwise Right Shift Assignment operator,x=x>>3,5=0101,3=0011
       //  0101  →  0010  →  0001  →  0000
       //         shift 1   shift 2   shift 3
    printf("%d\n",x);
    int y=5;
    y <<=3;////'<<='bitwise Left Shift Assignment operator,x=x>>3,5=0101
       //  0101  →  1010  →  10100  →  101000
       //         shift 1   shift 2   shift 3
    printf("%d\n",y);
    return 0;
}
//LEFT SHIFT  <<  → bits move LEFT  → 0s enter from RIGHT
//RIGHT SHIFT >>  → bits move RIGHT → 0s enter from LEFT (for positive numbers)