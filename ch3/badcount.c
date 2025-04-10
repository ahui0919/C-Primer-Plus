/* badcount.c -- incorrect argument counts */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    /* too many arguments */
    printf("%d\n", n, m);
    /* too few arguments */
    printf("%d %d %d\n", n);
    /* wrong kind of values */
    printf("%d %d\n", f, g);

    /* wrong kind of values */
    printf("%d %f \n", f, g);
    
    return EXIT_SUCCESS;
}