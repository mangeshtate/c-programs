#include <stdio.h>
/*
int main(){
    float l=3,b=5,a=0;
    a=l*b;
    printf("Area of Rectangle is %f",a);
    return 0;
}
*/
int main(){
    float l,b;
    printf("Input Area in cm:");
    scanf("%f",&l);
    printf("Input Breadth in cm:");
    scanf("%f",&b);
    printf("Area of rectangle is %f",l*b);
    //scanf("%f",&a);
    //printf("Area is :%f",a);
    return 0;
}