#include "basicIO.h"

int main() {
    char name[20];
    inputString("Enter name:", name, sizeof(name));
    printf("The name is %s", name);

    if (strcmp(name, "Kartik")== 0) {
        printf("\nYou may be Kartik Sethi");
    }
    return 0;
}