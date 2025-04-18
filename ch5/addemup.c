/* addemup.c -- five kinds of statements */
#include <stdio.h>
#include <stdlib.h>

/* finds sum of first 20 integers */
int main(int argc, char **argv)
{
    /* declaration statement */
    int couont;
    int sum;

    /* assignment statement */
    couont = 0;

    /* ditto */
    sum = 0;

    /* while */
    while(couont++ < 20) {
        /* statement */
        sum = sum + couont;

        /* function statement */
        printf("sum = %d\n", sum);
    }

    /* return statement */
    return EXIT_SUCCESS;
}