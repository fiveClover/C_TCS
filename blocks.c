#include "basicIO.h"

int main()      /* main is a function, and functions always contain a block */
{
    int age = 15;

    if (age > 30)       /* THIS if statement begins a block */
    {
        printf("Older than 30\n");
        age = age + 1;
    }

    if (age < 20)       /* THIS if statement does NOT begin a block */
        printf("Younger than 20\n");
    age = age + 5;

    printf("A block by itself will follow...\n");

    {
        int newage;

        newage = age + 30;
        printf("This statement is inside a block, newage = %d\n", newage);
    }
    //newage is not visible here as it is defined inside the block
    fflush(stdin);
    return 0;
}
