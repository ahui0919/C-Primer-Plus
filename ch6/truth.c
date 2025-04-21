/* truth.c -- what values are true */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = 3;
    
    while (n) {
        printf("%2d is true\n", n--);
    }

    printf("%2d is false\n", n);

    n = -3;

    while(n) {
        printf("%2d is true\n", n++);
    }

    printf("%2d is false\n",n);
    
    return EXIT_SUCCESS;
}