#include <stdio.h>

int main() {

    int age = 20;
    int hasID = 1;
    int hasTicket = 0;

    // Logical AND
    if (age >= 18 && hasID == 1) {
        printf("&& : Entry requirements satisfied\n");
    }

    // Logical OR
    if (hasTicket == 1 || hasID == 1) {
        printf("|| : At least one requirement is available\n");
    }

    // Logical NOT
    if (!hasTicket) {
        printf("! : Person does not have a ticket\n");
    }

    return 0;
}