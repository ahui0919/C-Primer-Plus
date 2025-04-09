/* bases.c--prints 100 in decimal, octal, and hex */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return EXIT_SUCCESS;
}