/* misuse.c -- uses a function incorrectly */
#include <stdio.h>
#include <stdlib.h>

/* old-style declaration */
int imax();

int main(int argc, char **argv)
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    return EXIT_SUCCESS;
}

int imax(n, m)
int n, m;
{
    return (n > m ? n : m);
}

