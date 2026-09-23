#include <stdio.h>
int main(){
    int x=10;
    int y=3;
    printf("Addition %d\n",x+y);
    printf("Subtraction %d\n",x-y);
    printf("Multiplication %d\n",x*y);
    printf("Division %d\n",x/y);
    printf("Modulus %d\n",x%y);
    int z=4;
    ++z;
    printf("Increment %d\n",z);
    --z;//Decrement
    printf("%d\n",z);
    return 0;
}