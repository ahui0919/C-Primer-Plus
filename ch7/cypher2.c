/* cypher2.c -- alters input, preserving non-letters */
#include <stdio.h>
// for isalpha()
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char ch;

    while ((ch = getchar()) != '\n') {
        /* if a letter */
        if (isalpha(ch)) {
            /* display next letter */
            putchar(ch + 1);
        } else {
            /* display as is */
            putchar(ch);
        }
    }

    // display the newline
    putchar(ch);
    
    return EXIT_SUCCESS;
}