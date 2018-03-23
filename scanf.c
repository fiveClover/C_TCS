#include "basicIO.h"

int main()
{
    int     x;
    float   y;
    char    string[100];

    /*
     *  string input
     */
    printf("Enter one word: ");
    scanf("%s", string);      /* note there is no & before string */
    printf("The word you entered was >>%s<<\n",string);

    printf("Enter many words: ");
    cI();
    scanf("%[^\n]", string);  /* read up to a newline (multiple words) */
    printf("The text you entered was >>%s<<\n",string);

    /*
     *  integer input
     */
    printf("Please enter a number: ");
    cI();
    scanf("%d", &x);                    /* note the & */
    printf("The number you entered was %d\n", x);

    /*
     *  character input
     */
    printf("Please enter a single character: ");
    cI();
    scanf("%c", &string[0]);
    printf("The character that you entered was '%c'\n", string[0]);

    printf("Please enter 4 characters: ");
    cI();
    scanf("%4c", &string[0]);
    printf("The characters you entered were >>>%c%c%c%c<<<\n",
           string[0], string[1], string[2], string[3]);

    /*
     *  floating-point formatting options
     */
    printf("Please enter a decimal number: ");
    cI();
    scanf("%f", &y);
    printf("The number you entered was %f\n", y);

    cI();
    return 0;
}

