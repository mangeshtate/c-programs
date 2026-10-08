#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the values of a,b,c respectively:\n");
    scanf("%d %d %d",&a,&b,&c);
    max=a>b?((a>c)?a:c):((b>c?b:c));
    printf("%d is Maximum",max);
    return 0;
}