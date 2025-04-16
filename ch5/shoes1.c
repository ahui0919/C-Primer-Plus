/* shoes1.c --converts a shoe size to inches */
#include <stdio.h>
#include <stdlib.h>

#define ADJUST 7.31     // one kind of symbolic constant

int main(int argc, char **argv)
{
    // another kind of symbolic constant
    const double SCALE = 0.333;
    double shoe;
    double foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's)   foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);
    
    return EXIT_SUCCESS;
}