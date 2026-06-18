/* fgets2.c -- using fgets() and fputs() */
#include <stdio.h>
#include <stdlib.h>

#define STLEN 10

int main(int argc, char **argv)
{
    char words[STLEN];

    puts("Enter strings (empty line to quit):");

    while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
        fputs(words, stdout);
    }

    puts("Done.");

    return EXIT_SUCCESS;
}