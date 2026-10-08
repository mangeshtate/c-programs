#include <stdio.h>
int main()
{
    int n;
    printf("Enter number from 1-3:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("one");
        break;//it is used to take exit from current loop
        case 2:printf("Two");
        break;
        case 3:printf("Three");
        break;
        default:printf("Invalid Input");
    }
    return 0;
}