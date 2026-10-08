#include <stdio.h>
int main()
{
    int a,b,c,d,max;
    printf("Enter 4 values for a,b,c,d respectively:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max=(a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d);//Important a vs b and c vs d,compare max num winner from both 
    printf("%d is maximum",max);
    return 0;
}