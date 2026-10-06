#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Value of a:\n");
    scanf("%d",&a);
    printf("Enter Value of b:\n");
    scanf("%d",&b);
    if(a>b){
       printf("a is Greater\n");
    }
    else if(a<b){
        printf("b is greater\n");
    }
    else {
        printf("Both are equal\n");
    }
    return 0;
}