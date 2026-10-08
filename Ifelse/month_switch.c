#include <stdio.h>
int main()
{
    int m;
    printf("Enter a Month number(1-12):\n");
    scanf("%d",&m);
    switch (m)
    {
        case 1:printf("31 Days\n");
        break;//used to take exit from current loop
        case 2:printf("28/29 Days\n");
        break;
        case 3:printf("31 Days\n");
        break;
        case 4:printf("30 Days\n");
        break;
        case 5:printf("31 Days\n");
        break;
        case 6:printf("30 Days\n");
        break;
        case 7:printf("31 Days\n");
        break;
        case 8:printf("31 Days\n");
        break;
        case 9:printf("30 Days\n");
        break;
        case 10:printf("31 Days\n");
        break;
        case 11:printf("30 Days\n");
        break;
        case 12:printf("31 Days\n");
        break;
        default:printf("Invalid Month\n");
        break;
    }
    return 0;
}