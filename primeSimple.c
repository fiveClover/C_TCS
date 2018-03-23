#include "basicIO.h"

int main() {
    printf("Enter a number \n");
    cI();
    int checkPrime;
    scanf("%d", &checkPrime);
    int divisors = 0;
    for (int i = 1; i <= (checkPrime / 2) + 1; ++i) {
        if (checkPrime % i == 0) {
            printf("%d\t", i);
            divisors++;
        }
    }
    if (checkPrime != 1) {
        printf("%d", checkPrime);
        divisors++;
    }
    if (divisors == 2) {
        printf("\n\nYup its' prime");
    }
    return 0;
}