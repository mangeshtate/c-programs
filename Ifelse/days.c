#include <stdio.h>
int main()
{
    int d1,m1,y1,d2,m2,y2;
    long days1,days2,difference;
    printf("Enter day,month,year of first date:\n");
    scanf("%d %d %d",&d1,&m1,&y1);
    printf("Enter Day,month,year of 2nd date:\n");
    scanf("%d %d %d",&d2,&m2,&y2);
    days1=y1*365+m1*30+d1;
    days2=y2*365+m2*30+d2;
    difference=days2-days1;
    printf("The Days between these two dates is %ld\n",difference);
    return 0;
}