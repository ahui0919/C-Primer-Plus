/* proto.c -- uses a function prototype */
#include <stdio.h>
#include <stdlib.h>

/* prototype */
int imax(int, int);

int main(int argc, char **argv)
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0 ));

    return EXIT_SUCCESS;
}

int imax(int n, int m)
{
    return (n > m ? n : m);
}