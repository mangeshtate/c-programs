#include <stdio.h>
int main(){
    int myint;
    float myfloat;
    double mydouble;
    char mychar;
    printf("%zu\n",sizeof(myint));//we use the %zu format specifier to print the result, instead of %d.
    printf("%zu\n",sizeof(myfloat));
    printf("%zu\n",sizeof(mydouble));
    printf("%zu\n",sizeof(mychar));
    return 0;
}