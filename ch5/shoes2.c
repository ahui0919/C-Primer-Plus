/* shoes2.c -- calculates foot lengths for several sizes */
#include <stdio.h>
#include <stdlib.h>

#define ADJUST 7.31

int main(int argc, char **argv)
{
    const double SCALE = 0.333;
    double shoe;
    double foot;

    printf("Shoe size (men's)     foot length\n");
    shoe = 3.0;

    /* Starting the while loop */
    while (shoe < 18.5)
    {
        /* start of block */
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
        /* end of block */
    }

    printf("If the shoe fits, wear it.\n");

    return EXIT_SUCCESS;
}