/* wheat.c -- exponential growth */
#include <stdio.h>
#include <stdlib.h>

#define SQUARES 64          // squares on a checkerboard

int main(int argc, char **argv)
{
    // world wwwwwwheaaaaat production in wheat grains
    const double CROP = 2E16; 
    double current;
    double total;
    int count = 1;

    printf("square     grains        total      ");
    printf("fractuib of  \n");
    printf("            added        grains     ");
    printf("World total\n");
    
    /* start with one grain */
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);

    while(count < SQUARES) {
        count = count + 1;
        current = 2.0 * current;

        /* double grains on next squares */
        total = total + current;        /* update total */
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    }

    printf("That's all.\n");
    
    return EXIT_SUCCESS;
}