/* echo.c -- repeats input */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char ch;

    while ((ch = getchar()) != '#') {
        putchar(ch);
    }
    
    return EXIT_SUCCESS;
}