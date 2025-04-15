/* width.c --field widths */
#include <stdio.h>
#include <stdlib.h>

#define PAGES 959

int main(int argc, char **argv)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    printf("*%0d*\n", PAGES);
    printf("*%02d*\n", PAGES);
    printf("*%010d*\n", PAGES);
    printf("*%010d*\n", -PAGES);

    return EXIT_SUCCESS;
}