#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a number a & b respectively:\n");
    scanf("%d %d",&a,&b);
    printf("%d is max",a>b?a:b);
    return 0;
}