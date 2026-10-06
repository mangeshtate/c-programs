#include <stdio.h>

int main() {

    int age;
    int isCitizen;

    printf("Enter User Age:\n");
    scanf("%d", &age);

    printf("Are you a citizen? (1 for Yes, 0 for No):\n");
    scanf("%d", &isCitizen);

    if (age >= 18) {

        printf("Valid Age for Voting\n");

        if (isCitizen == 1) {
            printf("Valid Citizen\n");
            printf("You are eligible to vote.\n");
        }
        else {
            printf("Not a citizen for voting, not eligible.\n");
        }

    }
    else {
        printf("Not Eligible for Voting\n");
    }

    return 0;
}
