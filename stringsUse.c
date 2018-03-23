//
// Created by Kartik on 3/23/2018.
//
#include "basicIO.h"

int x[21]; //primitive got default values when defined in global space

//but in functions they got junk values
/*
 * int types - 0
 * float types - 0.0
 * char types - '\0' i.e. null*/

int main() {
    //terminated by null i.e. /0
    char string[21];    //junk value or garbage value if not initialized
    scanf("%[^\n]", string);
    printf("%s\n", string);

    for (int i = 0; i < 21; ++i) {
        if (string[i] == '\0') {
            printf("\nNull found at index %d", i);
        } else
            printf("At index %d value is %c\n", i, string[i]);

    }
    char    name[21];

    name[0] = 'M';
    name[1] = 'a';
    name[2] = 'r';
    name[3] = 'k';
    name[4] = '\0';

    printf("The contents of name are %s\n", name);

    return 0;
}