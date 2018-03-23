#include "basicIO.h"

int main() {
    char firstName[21], lastName[21];
    cI();

    printf("Enter first name\t");
    scanf("%[^\n]", firstName);
    cI();
    printf("Enter last name\t");
    scanf("%[^\n]", lastName);

    char fullName[40];
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("\n\nHi! %s\nYour first name length is %d and last name length is %d", fullName,strlen(firstName),strlen(lastName));
    return 0;
}