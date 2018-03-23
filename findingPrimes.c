#include "basicIO.h"

int main() {
    long long start;        /* the first number */
    long long count;        /* the number of numbers */
    long long number;        /* each number to try */
    long long divisor;    /* the number we try dividing into the above */
    long long divisors;   /* the number of divisors found for each number */

    printf("Please enter a number to start at: ");
    scanf("%lld", &start);

    printf("Please enter the number of numbers: ");
    scanf("%lld", &count);

    for (number = start; number < start + count; ++number) {
        /*
         * now find the divisors (evenly dividing numbers), by trying all
         * the numbers from 1 up to the number
         */
        printf("The divisors of %lld are: ", number);

        divisors = 0;
        for (divisor = 1; divisor <= number; divisor = divisor + 1) {
            /*
             *  if this divisor divides evenly into the number
             */
            if (number % divisor == 0) {
                printf("%lld ", divisor);
                divisors = divisors + 1;
            }
        }

        /*
         *  the number is a prime if it has exactly two divisors (incl. itself)
         */
        if (divisors == 2)
            printf("*");

        printf("\n");
    }

    fflush(stdin);
    return 0;
}
