/* fgets1.c -- using fgets()  and fputs() */
#include <stdio.h>
#include <stdlib.h>

#define STLEN 14

int main(int argc, char **argv)
{
    char words[STLEN];

    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);

    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);

    puts("Done.");

    return EXIT_SUCCESS;
}