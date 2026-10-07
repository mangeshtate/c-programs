#include <stdio.h>//If else using logical-or 
int main()
{
    int m;
    printf("Enter a Month Number(1-12):\n");
    scanf("%d", &m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        printf("There are 31 Days in this Month\n");
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        printf("There are 30 days in this month");
    }
    else if (m == 2) {
        printf("There are 28 days in this month(General)");
    }
    else {
        printf("Invalid Month ");
    }
    return 0;
}