//System access control example - You must be logged in, 
//and then you either need to be an admin, 
//or have a high security clearance (level 1 or 2) to get access:
#include<stdio.h>
#include<stdbool.h>
int main(){
    int loggedIn,admin,security;
    printf("Are you logged into system(1 for yes 0 for no):\n");
    scanf("%d",&loggedIn);

    printf("Are you admin(1 for yes 0 for no):\n");
    scanf("%d",&admin);

    printf("Enter Security level(1 or 2):\n");
    scanf("%d",&security);

    if(loggedIn==1){
        printf("User is Logged into system..\n");
        if(admin==1 || security==1 || security==2)
        {
            printf("Access Granted.\n");

        }
        else{
            printf("Valid user with no access(ineligible).\n");

        }

    }
    else{
        printf("Invalid User no system access \n");

    }
    return 0;
}