/* power.c -- raises numbers to integer powers */
#include <stdio.h>
#include <stdlib.h>

// ANSI prototype
double power(double n, int p);

int main(int argc, char **argv)
{
    double x;
    double xpow;
    int exp;

    printf("Enter a number and the positive integer power ");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");

    while (scanf("%lf%d", &x, &exp) == 2 ) {
        // function call
        xpow = power(x, exp);

        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }

    printf("Hope you enjoyed this power trip --bye!\n");
    
    return EXIT_SUCCESS;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++) {
        pow *= n;
    }

    // return the value of pow
    return pow;
}