#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2;
    float d,r;
    printf("Enter coordinates of point(x1,y1):\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter coordinates of centre of circle(x2,y2):\n");
    scanf("%d %d",&x2,&y2);
    printf("Enter Radius of circle:\n");
    scanf("%f",&r);
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));//Distance Formula
    if(d>r){
        printf("Point is outside circle\n");
    }
    else if(d<r){
        printf("Point is inside the circle\n");
    }
    else{
        printf("Point lies on Circumference\n");
    }
    return 0;
}