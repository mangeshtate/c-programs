#include<stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,d,a,b;
    printf("Enter cordinates of point A and B as x1,y1,x2,y2 respectively:\n");
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    a=x2-x1;
    b=y2-y1;
    d=sqrt(pow(a,2)+pow(b,2));
    printf("Distance between two points is %.2f",d);
    return 0;
}