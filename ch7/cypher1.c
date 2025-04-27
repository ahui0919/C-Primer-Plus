/* cypher1.c -- alters input, preserving apaces */
#include <stdio.h>
#include <stdlib.h>

// that's quote-space-quote
#define SPACE ' '

int main(int argc, char **argv)
{
    char ch;

    // read a character
    ch = getchar();

    // while not end of line
    while (ch != '\n') {
        // leave the space
        if (ch == SPACE) {
            // character unchanged
            putchar(ch);
        } else {
            // change other characters
            putchar(ch + 1);
        }

        // get next character
        ch = getchar();
    }

    // print the newline
    putchar(ch);
    
    return EXIT_SUCCESS;
}