/* echo_eof.c -- repeats input to end of file */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int ch;

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    
    return EXIT_SUCCESS;
}