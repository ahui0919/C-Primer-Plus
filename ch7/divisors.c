/* divisors.c -- nested ifs display divisors of a number */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    /* number to be checked */
    unsigned long num;
    /* potential divisors */
    unsigned long div;
    /* prime flag */
    bool isPrime;

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit. \n");

    while (scanf("%lu", &num) == 1) {
        for (div = 2, isPrime = true; (div * div) <= num; div++) {
            if (num % div == 0) {
                if ((div * div) != num) {
                    printf("%lu is  divisible by %lu and %lu.\n", num, div, num / div);
                } else {
                    printf("%lu is divisible by %lu.\n", num, div);
                }
                
                /* number is not prime */
                isPrime = false;
            }
        }

        if (isPrime) {
            printf("%Lu is prime.\n", num);
        }

        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }

    printf("Bye.\n");

    return EXIT_SUCCESS;
}